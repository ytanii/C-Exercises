#include <stdio.h>

int main(void) {
    float x;
    printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\n");
    printf("Enter a value for x: ");
    scanf("%f", &x);

    // 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
    float result = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
    printf("The result is %.2f", result);
}
