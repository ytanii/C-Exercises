#include <stdio.h>

int main(void) {
    float n, epsilon, e = 1;

    int i = 0;

    printf("Enter epsilon: ");
    scanf("%f", &epsilon);


    while (true) {
        i++;
        float fact = 1;
        for (int j = 1; j <= i; j++) {
            fact *= j;
        }
        if (1.0f / fact < epsilon) {
            break;
        }
        e += 1.0f / fact;
    }

    printf("e: %f", e);
    return 0;
}
