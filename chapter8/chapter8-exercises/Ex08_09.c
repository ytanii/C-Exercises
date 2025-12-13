#include <stdio.h>

int main(void) {
    float temperature_readings[30][24] = {0};

    float daily_avg, avg = 0;
    for (int i = 0; i < 30; i++) {
        daily_avg = 0;
        for (int j = 0; j < 24; j++) {
            daily_avg += temperature_readings[i][j];
        }
        daily_avg /= 24.0f;
        avg += daily_avg;
    }

    avg /= 30.0f;

    printf("Monthly average: %.2f", avg);
}
