#include <stdio.h>

int main(void) {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);


    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            if (i % 2 == 0 && (j * j) == i) {
                printf("%d\n", i);
            }
        }
    }
    return 0;
}
