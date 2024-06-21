#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include "temp_function.h"

int main(int argc, char *argv[]) {

    maybe_show_welcome(argc);
    handle_arguments(argc, argv);
    maybe_show_help();

    data d;
    init(&d);

    add_file_info(&d);

    printf("#\tYear\tMonth\tMin\tMax\tAvg\n");

    uint16_t year = get_year(&d);

    for (int i=1; i<=12; i++) {
        if (month == -1 || month == i) {
            int8_t month_min = get_month_min_temp(&d, i);
            int8_t month_max = get_month_max_temp(&d, i);
            float month_avg = get_month_avg_temp(&d, i);
            printf("%d\t%hu\t%hhu\t%hhd\t%hhd\t%0.2f\n", i - 1, year, i, month_min, month_max, month_avg);
        }
    }

    if (month == -1) {
        int8_t year_min = get_year_min_temp(&d);
        int8_t year_max = get_year_max_temp(&d);
        float year_avg = get_year_avg_temp(&d);    

        printf("Year statistic: average is %0.2f, max is %hhd, min is %hhd\n", year_avg, year_max, year_min);
    }

    return 0;
}