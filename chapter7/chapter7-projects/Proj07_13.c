#include <stdio.h>

int main(void) {
    char c;

    printf("Enter a sentence: ");
    int words = 0, characters = 0;
    bool in_word = false;
    do {
        c = getchar();
        if (c != ' ' && c != '\n') {
            if (!in_word) {
                words++;
            }
            characters++;
            in_word = true;
        } else {
            in_word = false;
        }
    } while (c != '\n');

    float avg_word_len = (float) characters / (float) words;
    printf("Average word length: %.1f", avg_word_len);

    return 0;
}
