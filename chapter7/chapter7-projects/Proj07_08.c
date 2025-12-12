#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(void) {
    int hour, minutes;
    char ampm1 = 0, ampm2 = 0;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c%c", &hour, &minutes, &ampm1, &ampm2);

    ampm1 = toupper(ampm1);
    ampm2 = toupper(ampm2);

    if (ampm2 == 'M') {
        if (ampm1 == 'P' && hour != 12)
            hour += 12;
        else if (ampm1 == 'A' && hour == 12)
            hour = 0;
    } else {
        if (ampm1 == 'P' && hour != 12)
            hour += 12;
        else if (ampm1 == 'A' && hour == 12)
            hour = 0;
    }

    int user_time = hour * 60 + minutes;

    int closest_dep = 0, closest_arr = 0;
    int min_diff = 24 * 60;

    int dep, arr;

    dep = 8 * 60;
    arr = 10 * 60 + 16;
    if (abs(user_time - dep) < min_diff) {
        min_diff = abs(user_time - dep);
        closest_dep = dep;
        closest_arr = arr;
    }

    dep = 9 * 60 + 43;
    arr = 11 * 60 + 52;
    if (abs(user_time - dep) < min_diff) {
        min_diff = abs(user_time - dep);
        closest_dep = dep;
        closest_arr = arr;
    }

    dep = 11 * 60 + 19;
    arr = 13 * 60 + 31;
    if (abs(user_time - dep) < min_diff) {
        min_diff = abs(user_time - dep);
        closest_dep = dep;
        closest_arr = arr;
    }

    dep = 12 * 60 + 47;
    arr = 15 * 60;
    if (abs(user_time - dep) < min_diff) {
        min_diff = abs(user_time - dep);
        closest_dep = dep;
        closest_arr = arr;
    }

    dep = 14 * 60;
    arr = 16 * 60 + 8;
    if (abs(user_time - dep) < min_diff) {
        min_diff = abs(user_time - dep);
        closest_dep = dep;
        closest_arr = arr;
    }

    dep = 15 * 60 + 45;
    arr = 17 * 60 + 55;
    if (abs(user_time - dep) < min_diff) {
        min_diff = abs(user_time - dep);
        closest_dep = dep;
        closest_arr = arr;
    }

    dep = 19 * 60;
    arr = 21 * 60 + 20;
    if (abs(user_time - dep) < min_diff) {
        min_diff = abs(user_time - dep);
        closest_dep = dep;
        closest_arr = arr;
    }

    dep = 21 * 60 + 45;
    arr = 23 * 60 + 58;
    if (abs(user_time - dep) < min_diff) {
        min_diff = abs(user_time - dep);
        closest_dep = dep;
        closest_arr = arr;
    }

    int h = closest_dep / 60;
    int m = closest_dep % 60;
    char *ampm = (h >= 12) ? "p.m." : "a.m.";
    if (h > 12) h -= 12;
    if (h == 0) h = 12;

    printf("Closest departure time is %d:%02d %s, ", h, m, ampm);

    h = closest_arr / 60;
    m = closest_arr % 60;
    ampm = (h >= 12) ? "p.m." : "a.m.";
    if (h > 12) h -= 12;
    if (h == 0) h = 12;

    printf("arriving at %d:%02d %s.\n", h, m, ampm);

    return 0;
}
