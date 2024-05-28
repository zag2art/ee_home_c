#include <stdio.h>
#include <stdbool.h>
#include "temp_api.h"

float get_month_avg_temp(sensor info[], uint32_t number, uint16_t year, uint8_t month) {
  uint32_t cnt = 0;
  float sum = 0;
  for (int i=0; i < number; i++) {
    sensor s = info[i];
    if (s.year != year || s.month != month) {
      continue;
    }

    cnt++;
    sum += s.t;
  }

  return sum / cnt;
}

int8_t get_month_min_temp(sensor info[], uint32_t number, uint16_t year, uint8_t month) {
  bool inited = false;
  int8_t min = 0;
  for (int i=0; i < number; i++) {
    sensor s = info[i];
    if (s.year != year || s.month != month) {
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

int8_t get_month_max_temp(sensor info[], uint32_t number, uint16_t year, uint8_t month) {
  bool inited = false;
  int8_t max = 0;
  for (int i=0; i < number; i++) {
    sensor s = info[i];
    if (s.year != year || s.month != month) {
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

float get_year_avg_temp(sensor info[], uint32_t number, uint16_t year) {
  uint32_t cnt = 0;
  float sum = 0;
  for (int i=0; i < number; i++) {
    sensor s = info[i];
    if (s.year != year) {
      continue;
    }

    cnt++;
    sum += s.t;
  }

  return sum / cnt;
}

int8_t get_year_min_temp(sensor info[], uint32_t number, uint16_t year) {
  bool inited = false;
  int8_t min = 0;
  for (int i=0; i < number; i++) {
    sensor s = info[i];
    if (s.year != year) {
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

int8_t get_year_max_temp(sensor info[], uint32_t number, uint16_t year) {
  bool inited = false;
  int8_t max = 0;
  for (int i=0; i < number; i++) {
    sensor s = info[i];
    if (s.year != year) {
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