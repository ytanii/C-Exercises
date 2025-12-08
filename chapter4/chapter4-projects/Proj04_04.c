#include <stdio.h>

int main(void) {
    int number, octal_number = 0;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &number);

    octal_number += number % 8;
    number /= 8;
    octal_number += (number % 8) * 10;
    number /= 8;
    octal_number += (number % 8) * 100;
    number /= 8;
    octal_number += (number % 8) * 1000;
    number /= 8;
    octal_number += (number % 8) * 10000;

    printf("In octal, your number is: %05d", octal_number);


    return 0;
}
