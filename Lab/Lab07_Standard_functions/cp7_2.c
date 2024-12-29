#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define m 275

int main() {
    int n, i, r;
    printf("Please Enter n: ");
    scanf("%d", &n);

    if (n >= 0) {
        srand(time(NULL));
        printf("Random numbers = ");
        for (i = 0; i < n; i++) {
            r = rand() % (m + 1);
            printf("%d ", r);
        }
    } else {
        printf("Goodbye !!");
    }

    return 0;
}