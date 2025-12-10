#include <stdio.h>

int main(void) {

    float number,max = 0;
    do {
        printf("Enter a number: ");
        scanf("%f",&number);
        if (max < number) {
            max = number;

        }
    }while (number != 0);

    printf("The largest number entered was %.2f",max);
}
