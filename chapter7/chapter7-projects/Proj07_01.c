#include <stdio.h>

int main(void) {
    int  n;
    long i;
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        printf("%10ld%10ld\n", i, i * i);
    }
    return 0;
}

// smallest value of int i that causes overflow is 46341
// smallest value of short i that causes overflow is 182
// smallest value of long i that causes overflow is 3037000500
