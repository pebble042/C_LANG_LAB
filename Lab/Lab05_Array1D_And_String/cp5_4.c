#include <stdio.h>
#define N 10
int main() {
    int i, numbers[10], n_search;
    printf("Enter 10 numbers : ");

    for (i = 0; i < N; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("Number to search : ");
    scanf("%d", &n_search);

    int found = 0;

    for (i = 0; i < N; i++) {
        if (numbers[i] == n_search) {
            printf("Position = %d", i + 1);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Data not found");
    }

    return 0;
}