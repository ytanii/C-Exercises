#include <limits.h>
#include <stdio.h>

int main(void) {
    int month, day, year;
    int min_day = INT_MAX, min_month = INT_MAX, min_year = INT_MAX;


    while (true) {
        printf("Enter date: (mm/dd/yy): ");
        scanf("%d/%d/%d", &month, &day, &year);

        if (month == 0 && day == 0 && year == 0) {
            break;
        }
        if (year < min_year ||
            (year == min_year && month < min_month) ||
            (year == min_year && month == min_month && day < min_day)) {
            min_year = year;
            min_month = month;
            min_day = day;
            }
    }


    printf("%d/%d/%02d is the earlier date\n", min_month, min_day, min_year);
    return 0;
}
