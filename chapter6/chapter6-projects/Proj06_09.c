#include <stdio.h>

int main(void) {
    float loan_amount, interest_rate, monthly_payment;
    int payments;

    printf("Enter amount of loan: ");
    scanf("%f", &loan_amount);

    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);

    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    printf("Enter number of payments: ");
    scanf("%d",&payments);

    interest_rate /= 100.0f;
    float monthly_interest_rate = interest_rate / 12.0f;


    for (int i = 0; i < payments; i++) {
        loan_amount -= (monthly_payment - (monthly_interest_rate * loan_amount));
        printf("\nBalance remaining after payment: %.2f\n", loan_amount);
    }

    return  0;
}