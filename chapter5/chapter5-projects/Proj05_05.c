#include <stdio.h>

int main(void) {
    float taxable_income, tax;

    printf("Enter the amount of taxable income: ");
    scanf("%f",&taxable_income);

    if (taxable_income < 750) {
        tax = taxable_income * 0.01f;
    }else if (taxable_income <= 2250) {
        tax = 7.5f + (0.02f * (taxable_income - 750));
    }else if (taxable_income <= 3750) {
        tax = 37.5f + (0.03f * (taxable_income - 2250));
    }else if (taxable_income <= 5250) {
        tax = 82.5f + (0.04f * (taxable_income - 3750));
    }else if (taxable_income <= 7000) {
        tax = 142.5f + (0.05f * (taxable_income - 5250));
    }else {
        tax = 230.0f + (0.06f * (taxable_income - 7000));
    }

    printf("Tax due: %.2f\n",tax);
    return 0;
}
