#include <stdio.h>

int main(void) {
    printf("Enter phone number: ");
    char c;
    do {
        c = getchar();
        if (c >= 'A' && c <= 'Z') {
            if (c >= 'A' && c <= 'C') {
                printf("2");
            }
            if (c >= 'D' && c <= 'F') {
                printf("3");
            }
            if (c >= 'G' && c <= 'I') {
                printf("4");
            }
            if (c >= 'J' && c <= 'L') {
                printf("5");
            }
            if (c >= 'M' && c <= 'O') {
                printf("6");
            }
            if (c >= 'P' && c <= 'S') {
                printf("7");
            }
            if (c >= 'T' && c <= 'V') {
                printf("8");
            }
            if (c >= 'W' && c <= 'Y') {
                printf("9");
            }

        }else if (c != '\n') {
            putchar(c);
        }
    }while (c != '\n');


    return 0;
}