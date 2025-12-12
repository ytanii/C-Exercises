#include <math.h>
#include <stdio.h>

int main(void) {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d",&n);
    long long fact = 1;

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("Factorial of %d: %ld",n,fact);


    return 0;
}

// for type short, the maximum value of n for a correct factorial is 7.
// for type int, the maximum value of n for a correct factorial is 12.
// for type long, the maximum value of n for a correct factorial is 20.
// for type long long, the maximum value of n for a correct factorial is 20.
// for type float, the maximum value of n for a correct factorial is 34.
// for type double, the maximum value of n for a correct factorial is 170.
// for type long double, the maximum value of n for a correct factorial is 1754.

