#include <stdio.h>

int main(void) {
    int number, reversed_number = 0;

    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    reversed_number += ((number % 10) * 100);
    number /= 10;
    reversed_number += ((number % 10) * 10);
    reversed_number += number / 10;


    printf("The reversal is: %d\n", reversed_number);

    return 0;
}
