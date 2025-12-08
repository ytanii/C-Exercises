#include <stdio.h>

int main(void){

    int twenty_four_hour_time, minutes;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &twenty_four_hour_time, &minutes);


    printf("Equivalent 12-hour time: ");
    if (twenty_four_hour_time == 0) {
        printf("12:%02d AM", minutes);
    } else if (twenty_four_hour_time == 12) {
        printf("12:%02d PM", minutes);
    } else if (twenty_four_hour_time > 12) {
        printf("%d:%02d PM", twenty_four_hour_time - 12, minutes);
    } else {
        printf("%d:%02d AM", twenty_four_hour_time, minutes);
    }

  return 0;
  
}
