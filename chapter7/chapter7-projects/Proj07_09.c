#include <stdio.h>
#include <ctype.h>

int main(void) {
    int hour, minute;
    char ampm1 = 0, ampm2 = 0;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c%c", &hour, &minute, &ampm1, &ampm2);

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

    printf("Equivalent 24-hour time: %02d:%02d\n", hour, minute);

    return 0;
}