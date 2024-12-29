#include <stdio.h>
float numberInverse(int x) {
    float result;
    if (x == 0) {
        result = 0;
    } else {
        result = 1.0 / x;
    }
    return result;
}

int main() {
    int x;

    printf("Enter x = ");
    scanf("%d", &x);
    printf("inverse(%d) = %.5f", x, numberInverse(x));
}
