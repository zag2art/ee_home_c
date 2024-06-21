#include "temp_function.h"

#define PURPLE "\033[0;35m"
#define RESET "\033[0m"

bool show_help = false;
char filename[256] = "";
int month = -1;

int cmp(const void *a, const void *b) {
    const sensor *sensorA = (const sensor *)a;
    const sensor *sensorB = (const sensor *)b;

    if (sensorA->year != sensorB->year) {
        return sensorA->year - sensorB->year;
    }
    if (sensorA->month != sensorB->month) {
        return sensorA->month - sensorB->month;
    }
    if (sensorA->day != sensorB->day) {
        return sensorA->day - sensorB->day;
    }
    if (sensorA->hh != sensorB->hh) {
        return sensorA->hh - sensorB->hh;
    }
    return sensorA->mm - sensorB->mm;
}

void sort_records(data *d) {
  qsort(d->info, d->number, sizeof(sensor), cmp);
}

float get_month_avg_temp(data *d, uint8_t month) {
  uint32_t cnt = 0;
  int64_t sum = 0;
  for (int i=0; i < d->number; i++) {
    sensor s = d->info[i];
    if (s.month != month) {
      continue;
    }

    cnt++;
    sum += s.t;
  }

  return sum / (float) cnt;
}

int8_t get_month_min_temp(data *d, uint8_t month) {
  bool inited = false;
  int8_t min = 0;
  for (int i=0; i < d->number; i++) {
    sensor s = d->info[i];
    if (s.month != month) {
      continue;
    }

    if (!inited) {
      min = s.t;
      inited = true;
    }

    min = s.t < min ? s.t : min;
  }

  return min;
}

int8_t get_month_max_temp(data *d, uint8_t month) {
  bool inited = false;
  int8_t max = 0;
  for (int i=0; i < d->number; i++) {
    sensor s = d->info[i];
    if (s.month != month) {
      continue;
    }

    if (!inited) {
      max = s.t;
      inited = true;
    }

    max = s.t > max ? s.t : max;
  }

  return max;
}

  
// вывода статистику за год: 
// • среднегодовая температура 
// • минимальная температура 
// • максимальная температура

float get_year_avg_temp(data *d) {
  uint32_t cnt = 0;
  int64_t sum = 0;
  for (int i=0; i < d->number; i++) {
    sensor s = d->info[i];
    cnt++;
    sum += s.t;
  }

  return sum / (float)cnt;
}

int8_t get_year_min_temp(data *d) {
  bool inited = false;
  int8_t min = 0;
  for (int i=0; i < d->number; i++) {
    sensor s = d->info[i];
    if (!inited) {
      min = s.t;
      inited = true;
    }

    min = s.t < min ? s.t : min;
  }

  return min;
}

int8_t get_year_max_temp(data *d) {
  bool inited = false;
  int8_t max = 0;
  for (int i=0; i < d->number; i++) {
    sensor s = d->info[i];
    if (!inited) {
      max = s.t;
      inited = true;
    }

    max = s.t > max ? s.t : max;
  }

  return max;
}

void init(data *d) {
  d->max = 4;
  d->info = malloc(sizeof(sensor) * d->max);
  d->number = 0;
}

void destroy(data *d) {
  d->max = 0;
  d->number = 0;
  free(d->info);
}

void add_record(data *d, uint16_t year, uint8_t month, uint8_t day, uint8_t hh, uint8_t mm, int8_t t) {
    if (d->number >= d->max) {
      d->max *= 2;
      d->info = realloc(d->info, sizeof(sensor) * d->max);
    }

    d->info[d->number].year = year;
    d->info[d->number].day = day;
    d->info[d->number].month = month;
    d->info[d->number].hh = hh;
    d->info[d->number].mm = mm;
    d->info[d->number].t = t;
    d->number++;
}

void del_record(data *d, int index){
  if (index < 0 || index >= d->number) {
    return;
  }

  for (int i = index + 1; i < d->number; i++) {
    d->info[i - 1] = d->info[i];
  }

  d->number--;
}

void add_hardcoded_info(data *d) {
    d->number = 0;
    add_record(d, 2021, 9, 16, 11, 00, 9);
    add_record(d, 2022, 9, 2,  11, 00, -9);
    add_record(d, 2021, 1, 7,  11, 00, 8);
    add_record(d, 2021, 9, 5,  11, 00, 1);
}

void add_file_info(data *d) {
  // TODO remove me
  // strcpy(filename, "temperature_big.csv");
  // strcpy(filename, "temperature_small.csv");

  if (filename[0] == 0) {
    printf("File should be provided\n");
    exit(1);
  }

  FILE *file = fopen(filename, "r");
  if (file == NULL) {
    printf("Unable to open file");
    exit(1);
  }

  int r;
  int index = 1;
  sensor a;

  while (true){
    r = fscanf(file, "%hu;%hhu;%hhu;%hhu;%hhu;%hhd", &a.year, &a.month, &a.day, &a.hh, &a.mm, &a.t);

    if (r <= 0) return;

    if (r < 6) {
      char s[200];
      r = fscanf(file, "%[^\n]", &s);
      printf("Error in line: %d\n", index);
    } else {
      add_record(d, a.year, a.month, a.day, a.hh, a.mm, a.t);
    }
    index++;
  }
}

void print_info(data *d) {
    printf("===================================\n");
    for (int i = 0; i < d->number; i++) {
        sensor info = d->info[i];
        printf("%04d-%02d-%02d %02d:%02d t=%3d\n", 
            info.year, 
            info.month, 
            info.day, 
            info.hh, 
            info.mm, 
            info.t
        );
    }
}

void handle_arguments(int argc, char *argv[]) {
    int rez=0;
    //  opterr=0;
    while ( (rez = getopt(argc,argv,"hf:m:")) != -1){
        switch (rez){
            case 'h': 
                // printf("found argument \"h\".\n"); 
                show_help = true;
                break;
            case 'f': 
                strcpy(filename, optarg);
                // printf("found argument \"f = %s\".\n", filename); 
                break;
            case 'm': 
                sscanf(optarg, "%d", &month);
                // printf("found argument \"m = %d\".\n", month);                 
                break;
            case '?': 
                printf("Unknown parameter found !\n");
                break;
        };
    };
}

void maybe_show_welcome(int argc) {
    if (argc != 1) return; 
    printf(PURPLE "report" RESET " (ver. 1.0)\n" );
    printf("Temperature statistics application\n");
    printf("Developer Zayats A. G. - Group EE_IUS #1\n");
    printf("Please use " PURPLE "-h" RESET " to show help\n\n");
    exit(0);
}

void maybe_show_help() {
    if (!show_help) return;
    printf("Temperature statistics application. Please enter key:\n");
    printf(PURPLE"-h" RESET " - for help\n");
    printf(PURPLE"-f file_name.csv" RESET " - source file\n");
    printf(PURPLE"-m xx" RESET " - show only xx month\n\n");    
    exit(0);
}

uint16_t get_year(data *d) {
  if (d->number > 0) {
    return d->info[0].year;
  } else {
    return 0;
  }
}
