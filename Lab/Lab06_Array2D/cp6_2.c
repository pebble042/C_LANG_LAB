#include <stdio.h>
int main() {

    int i, j;
    float scores[3][5] = {  {84, 71, 96, 65, 79}, 
                            {90, 55, 83, 68, 96}, 
                            {61, 77, 82, 94, 59}};

    for (i = 0; i < 3; i++) {
        printf("Please enter the data for row #%d of the array : ", i + 1);
        for (j = 0; j < 5; j++) {
            scanf("%f", &scores[i][j]);
        }
    }

    float sum, sum_all_rows = 0.0;
    int count = 0;

    for (i = 0; i < 3; i++) {
        for (j = 0, sum = 0.0; j < 5; j++) {
            sum = sum + scores[i][j];
            count++;
        }
        printf("Sum of row % d = % .2f \n", i + 1, sum);
        sum_all_rows += sum;
    }
    printf("Sum of all rows = %.2f\n", sum_all_rows);

    char mode;
    int min = scores[0][0], max = scores[0][0];
    do {
        printf("What do you want to know <x=max, n=min, a=average, q=quit> : ");
        scanf(" %c", &mode);

        switch (mode) {
            case 'x':
                for (i = 1; i < 3; i++) {
                    for (j = 0; j < 5; j++) {
                        if (scores[i][j] > max) {
                            max = scores[i][j];
                        }
                    }
                }
                printf("Maximum number in the array = %d\n", max);
                break;

            case 'n':
                for (i = 1; i < 3; i++) {
                    for (j = 0; j < 5; j++) {
                        if (scores[i][j] < min) {
                            min = scores[i][j];
                        }
                    }
                }
                printf("Minimum number in the array = %d\n", min);
                break;

            case 'a':
                printf("Average = %.2f\n", sum_all_rows / count);
                break;

            case 'q':
                printf("Goodbye");
                break;

            default:
                printf("Mode error !, try again\n");
        }
    } while (mode != 'q');

    return 0;
}