#include <stdio.h>

int main(void) {
    int i = 0;

    while (i < 10) {

        goto continue_label;

        printf("This will never run\n");

        continue_label:
                i++;
    }

    printf("i reached %d\n", i);
    return 0;
}