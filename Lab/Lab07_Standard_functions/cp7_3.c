#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int m, n, i, numRand;
    printf("Please Enter range of random number (m): ");
    scanf("%d", &m);

    printf("Please enter expected value (n) : ");
    scanf("%d", &n);

    if (m > n) {
        srand(time(NULL));
        printf("Random numbers = ");
        do {
            numRand = rand() % (m + 1);
            printf("%d ", numRand);

        } while (abs(numRand - n) > 2);
        printf("\nGoodbye");
    } else {
        printf("Input Error !, n must be less than m, try again");
    }

    return 0;
}