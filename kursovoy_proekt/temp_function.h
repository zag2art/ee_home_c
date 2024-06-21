#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#ifndef _TEMP_API_
#define _TEMP_API_
#define SIZE 30

extern bool show_help;
extern char filename[256];
extern int month;

// Структура типа:  
//  dddd - год 4 цифры 
//  mm - месяц 2 символа  
//  dd - день 2 цифры 
//  hh - часы 2 цифры 
//  mm - минуты 2 цифры 
//  temperature - целое число от -99 до 99

typedef struct {
    uint16_t year;
    uint8_t month;
    uint8_t day;
    uint8_t hh;
    uint8_t mm;
    int8_t t;
} sensor;

typedef struct {
    uint32_t number;
    uint32_t max;
    sensor *info;
} data;


uint16_t get_year(data *d);

// Создать прототипы (заглушки) функций вывода статистики по каждому месяцу:
// • среднемесячная температура, 
// • минимальная температура в текущем месяце, 
// • максимальная температура в текущем месяце, 

float get_month_avg_temp(data *d, uint8_t month);
int8_t get_month_min_temp(data *d, uint8_t month);
int8_t get_month_max_temp(data *d, uint8_t month);

  
// вывода статистику за год: 
// • среднегодовая температура 
// • минимальная температура 
// • максимальная температура

float get_year_avg_temp(data *d);
int8_t get_year_min_temp(data *d);
int8_t get_year_max_temp(data *d);


// ------------------------

void init(data *d);
void destroy(data *d);
void add_record(data *d, uint16_t year, uint8_t month, uint8_t day, uint8_t hh, uint8_t mm, int8_t t);
void del_record(data *d, int index);
void sort_records(data *d);
void add_hardcoded_info(data *d);
void add_file_info(data *d);

void print_info(data *d);

void handle_arguments(int argc, char *argv[]);
void maybe_show_welcome(int argc);

void maybe_show_help();

#endif