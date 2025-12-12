#include <stdio.h>
#include <ctype.h>

int main(void) {
    printf("Enter a first and last name: ");
    char first_letter, c;
    scanf(" %c", &first_letter);
    first_letter = toupper(first_letter);


    bool next_word = false;
    do {
        c = getchar();

        if (c == ' ') {
            next_word = true;
        }

        if (next_word && c != ' ' && c != '\n') {
            putchar(c);
        }
    } while (c != '\n');


    printf(", %c.\n", first_letter);

    return 0;
}
