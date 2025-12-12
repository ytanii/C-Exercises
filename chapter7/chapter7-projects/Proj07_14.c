#include <math.h>
#include <stdio.h>

int main(void) {
    double y = 1, new_y = 0;
    int x;

    printf("Enter a positive number: ");
    scanf("%d", &x);

    while (true) {
        new_y = ((x / y) + y) / 2.0;
        if ((fabs(y - new_y) < y * 0.00001)) {
            break;
        }
        y = new_y;
    }

    printf("Square root: %f", y);


    return 0;
}
