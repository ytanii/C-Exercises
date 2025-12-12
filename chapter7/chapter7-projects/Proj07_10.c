#include <stdio.h>
#include <ctype.h>

int main(void) {
    printf("Enter a sentence: ");

    char c;
    int vowels = 0;
    do {
        c = getchar();
        c = toupper(c);

        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            vowels++;
        }
    } while (c != '\n');


    printf("Your sentence contains %d vowels", vowels);
    return 0;
}
