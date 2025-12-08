#include <stdio.h>

int main(void) {
    int number, digit1;

    printf("Enter a two-digit number: ");
    scanf("%d", &number);

    if (number == 100) {
        printf("Letter grade: A");
    }

    if ((number >= 0) && (number <= 100)) {
        digit1 = number / 10;
        switch (digit1) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
                printf("Letter grade: F");
                break;
            case 6:
                printf("Letter grade: D");
                break;
            case 7:
                printf("Letter grade: C");
                break;
            case 8:
                printf("Letter grade: B");
                break;
            case 9:
                printf("Letter grade: A");
                break;
        }
    } else {
        printf("Invalid grade");
    }

    return 0;
}
