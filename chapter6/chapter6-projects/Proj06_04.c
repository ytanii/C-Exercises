#include <stdio.h>

int main(void) {
    float commission, value_of_trade;

    while (true) {
        printf("Enter value of trade: ");
        scanf("%f", &value_of_trade);
        if (value_of_trade == 0) {
            break;
        }

        if (value_of_trade > 500000) {
            commission = 255 + ((0.09f / 100.0f) * value_of_trade);
        } else if (value_of_trade > 50000) {
            commission = 155 + ((0.11f / 100.0f) * value_of_trade);
        } else if (value_of_trade > 20000) {
            commission = 100 + ((0.22f / 100.0f) * value_of_trade);
        } else if (value_of_trade > 6250) {
            commission = 76 + ((0.34f / 100.0f) * value_of_trade);
        } else if (value_of_trade > 2500) {
            commission = 56 + ((0.66f / 100.0f) * value_of_trade);
        } else {
            commission = 30 + ((1.7f / 100.0f) * value_of_trade);
        }

        if (commission < 39.0f) {
            commission = 39.0f;
        }

        printf("Commission: $%.2f\n", commission);
    }
    return 0;
}
