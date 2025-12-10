#include <stdio.h>

int main(void) {
    int m, n;
    printf("Enter a fraction: ");
    scanf("%d/%d", &m, &n);
    int num1 = m;
    int den1 = n;

    while (n != 0) {
        int remainder = m % n;
        m = n;
        n = remainder;
    }

    printf("In lowest terms : %d/%d\n", num1 / m, den1 / m);
}
