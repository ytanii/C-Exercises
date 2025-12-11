#include <stdio.h>

int main(void) {
    int number, reversed_number = 0;

    printf("Enter a two-digit number: ");
    scanf("%d", &number);

    do {
        int digit = 0;
        digit = number % 10;
        reversed_number = reversed_number * 10 + digit;
        number /= 10;
    } while (number != 0);
    printf("The reversal is: %d", reversed_number);

    return 0;
}
