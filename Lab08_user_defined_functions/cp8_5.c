#include <math.h>
#include <stdio.h>

int T(int i) {
    int j, T = 0;
    for (j = 0; j <= i; j++) {
        T = T + j;
    }
    return T;
}

int main() {
    int i, n;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 0; i <= n; i++) {
        printf("%d ", T(i));
    }
    return 0;
}