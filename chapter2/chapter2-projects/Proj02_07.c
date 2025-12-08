#include <stdio.h>

int main(void) {
    int amount;
    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    int twenty_bills = amount / 20;
    amount -= 20 * twenty_bills;

    int ten_bills = amount / 10;
    amount -= 10 * ten_bills;

    int five_bills = amount / 5;
    amount -= 5 * five_bills;

    int one_bills = amount;

    printf("\n$20 bills: %d\n$10 bills: %d\n$5 bills: %d\n$1 bills: %d\n", twenty_bills, ten_bills, five_bills, one_bills);
}
