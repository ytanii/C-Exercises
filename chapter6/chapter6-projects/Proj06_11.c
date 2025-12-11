#include <stdio.h>

int main(void) {
    float n,epsilon, e = 1;

    printf("Enter n: ");
    scanf("%f", &n);


    for (int i = 1; i <= n; i++) {
        float fact = 1;
        for (int j = 1; j <= i; j++) {
            fact *= j;
        }
        e += 1.0f / fact;
    }

    printf("e: %f", e);
    return 0;
}
