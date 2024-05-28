#include <stdint.h>

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

// Создать прототипы (заглушки) функций вывода статистики по каждому месяцу:
// • среднемесячная температура, 
// • минимальная температура в текущем месяце, 
// • максимальная температура в текущем месяце, 

float get_month_avg_temp(sensor info[], uint32_t number, uint16_t year, uint8_t month);
int8_t get_month_min_temp(sensor info[], uint32_t number, uint16_t year, uint8_t month);
int8_t get_month_max_temp(sensor info[], uint32_t number, uint16_t year, uint8_t month);

  
// вывода статистику за год: 
// • среднегодовая температура 
// • минимальная температура 
// • максимальная температура

float get_year_avg_temp(sensor info[], uint32_t number, uint16_t year);
int8_t get_year_min_temp(sensor info[], uint32_t number, uint16_t year);
int8_t get_year_max_temp(sensor info[], uint32_t number, uint16_t year);

