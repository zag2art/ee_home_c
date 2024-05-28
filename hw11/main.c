#include <stdio.h>
#include <stdint.h>
#include "temp_api.h"
#define SIZE 30

typedef struct {
    uint32_t number;
    sensor info[SIZE];
} data;

void add_record(sensor info[], int number, uint16_t year, uint8_t month, uint8_t day, uint8_t hh, uint8_t mm, int8_t t) {
    info[number].year = year;
    info[number].day = day;
    info[number].month = month;
    info[number].hh = hh;
    info[number].mm = mm;
    info[number].t = t;
}

void add_info(data *d) {
    d->number = 0;
    add_record(d->info, d->number++, 2021, 9, 16, 11, 00, 9);
    add_record(d->info, d->number++, 2022, 9, 2,  11, 00, -9);
    add_record(d->info, d->number++, 2021, 1, 7,  11, 00, 8);
    add_record(d->info, d->number++, 2021, 9, 5,  11, 00, 1);
}

int main() {
  data d;
  add_info(&d);

  float year_avg = get_year_avg_temp(d.info, d.number, 2021);
  int8_t year_min = get_year_min_temp(d.info, d.number, 2021);
  int8_t year_max = get_year_max_temp(d.info, d.number, 2021);

  printf("2021 year temperature, avg=%.2f, min=%d, max=%d\n", year_avg, year_min, year_max);

  float month_avg = get_month_avg_temp(d.info, d.number, 2021, 9);
  int8_t month_min = get_month_min_temp(d.info, d.number, 2021, 9);
  int8_t month_max = get_month_max_temp(d.info, d.number, 2021, 9);  

  printf("2021 September temperature, avg=%.2f, min=%d, max=%d\n", month_avg, month_min, month_max);

  return 0;
}