#include <stdio.h>

int main(void) {
    int days, offset;
    printf("Enter number of days in month: ");
    scanf("%d", &days);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &offset);

    int counter = 0;
    for (int i = 1; i <= days; i++, counter++) {
        if (i == 1) {
            for (int n = 0; n < offset; n++) {
                printf("  ");
            }
            counter = offset;
        }

        printf("%2d ", i);
        if (counter % 7 == 0) {
            printf("\n");
        }
    }

    return 0;
}
