#include <stdio.h>

int main(void) {
    int number_one, number_two, number_three, number_four, number_five, number_six, number_seven, number_eight,
            number_nine, number_ten, number_eleven, number_twelve, number_thirteen, number_fourteen, number_fifteen,
            number_sixteen;

    printf("Enter the numbers from 1 to 16 in any order: ");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &number_one, &number_two, &number_three, &number_four, &number_five,
          &number_six, &number_seven, &number_eight, &number_nine, &number_ten, &number_eleven, &number_twelve,
          &number_thirteen, &number_fourteen, &number_fifteen, &number_sixteen);

    int row_one_sum, row_two_sum, row_three_sum, row_four_sum;
    int column_one_sum, column_two_sum, column_three_sum, column_four_sum;
    int diagonal_one_sum, diagonal_two_sum;

    row_one_sum = number_one + number_two + number_three + number_four;
    row_two_sum = number_five + number_six + number_seven + number_eight;
    row_three_sum = number_nine + number_ten + number_eleven + number_twelve;
    row_four_sum = number_thirteen + number_fourteen + number_fifteen + number_sixteen;

    column_one_sum = number_one + number_five + number_nine + number_thirteen;
    column_two_sum = number_two + number_six + number_ten + number_fourteen;
    column_three_sum = number_three + number_seven + number_eleven + number_fifteen;
    column_four_sum = number_four + number_eight + number_twelve + number_sixteen;

    diagonal_one_sum = number_one + number_six + number_eleven + number_sixteen;
    diagonal_two_sum = number_thirteen + number_ten + number_seven + number_four;

    printf("Row sums: %d %d %d %d\n", row_one_sum, row_two_sum, row_three_sum, row_four_sum);
    printf("Column sums: %d %d %d %d\n", column_one_sum, column_two_sum, column_three_sum, column_four_sum);
    printf("Diagonal sums: %d %d\n", diagonal_one_sum, diagonal_two_sum);


    return 0;
}
