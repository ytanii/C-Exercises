#include <stdio.h>

int main(void) {
    float commission, value_of_trade = 0, price_per_share, rival_commission = 0;
    int shares;


    printf("Enter the number of shares: ");
    scanf("%d", &shares);
    printf("Enter the price per share: ");
    scanf("%f", &price_per_share);

    value_of_trade = shares * price_per_share;


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


    if (shares < 2000) {
        rival_commission = 33.0f + (0.03f * shares);
    } else {
        rival_commission = 33.0f + (0.02f * shares);
    }
    printf("Commission: $%.2f\n", commission);
    printf("Rival Broker Commission: $%.2f\n", rival_commission);
    return 0;
}
