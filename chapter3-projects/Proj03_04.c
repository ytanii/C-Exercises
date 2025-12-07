#include <stdio.h>

int main(void) {
    int first_three, second_three, third_four;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d",&first_three,&second_three,&third_four);

    printf("You entered %d.%d.%d",first_three,second_three,third_four);


    return 0;
}
