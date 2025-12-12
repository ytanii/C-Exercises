#include <stdio.h>

int main(void) {
    char c;

    float result = 0;

    bool is_first = true;
    do {
        float n;
        if (is_first) {
            scanf("%f", &n);
            result += n;
            is_first = false;
            continue;
        }
        c = getchar();

        if (c == '+') {
            scanf("%f", &n);

            result += n;
        } else if (c == '-') {
            scanf("%f", &n);

            result -= n;
        } else if (c == '*') {
            scanf("%f", &n);

            result *= n;
        } else if (c == '/') {
            scanf("%f", &n);

            result /= n;
        }
    } while (c != '\n');

    printf("Value of expression: %.2f", result);
    return 0;
}
