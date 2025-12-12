#include <stdio.h>

int main(void) {
    float sum = 0;
    float number = 0;
    printf("Enter integers: ");
    do {
        scanf("%f", &number);

        sum += number;
    } while (number != 0);

    printf("The sum is: %f\n", sum);


    return 0;
}