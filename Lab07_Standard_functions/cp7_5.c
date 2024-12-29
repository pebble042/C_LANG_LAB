#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, rand_number, num_play, my_number;
    char mode;
    srand(time(NULL));

    rand_number = (rand() % 90) + 10;

    printf("Please Enter mode <e=easy, m=medium, d=difficult> ");
    scanf("%c", &mode);

    if (mode == 'e') {
        num_play = 6;
    } else if (mode == 'm') {
        num_play = 4;
    } else if (mode == 'd') {
        num_play = 2;
    }

    for (i = 1; i <= num_play; i++) {
        printf("Try #%d: ", i);
        scanf("%d", &my_number);

        if (rand_number == my_number) {
            printf("Congratulations !! You've correctly guessed the number.\n");
            break;
        } else if (rand_number > my_number) {
            if (i != num_play) {
                printf("Please try greater value.\n");
            } else {
                printf(
                    "Sorry, you've used up all %d chances. You didn't guess "
                    "the correct number.\n",
                    num_play);
            }
        } else if (rand_number < my_number) {
            if (i != num_play) {
                printf("Please try lower value.\n");
            } else {
                printf(
                    "Sorry, you've used up all %d chances. You didn't guess "
                    "the correct number.\n",
                    num_play);
            }
        }
    }
    printf("Good bye\n");
    //	printf("Random_number = %d",rand_number);
    return 0;
}