#include <math.h>
#include <stdio.h>
int calculateValue(int x) {
    int result;
    if (x == 0) {
        result = 0;
    } else if (x > 0) {
        result = pow(x, 2) + (2 * x) + 5;
    } else if (x < 0) {
        result = pow(x, 3) + (4 * pow(x, 2)) - (7 * x) + 71;
    }
    return result;
}
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("F(x) = %d", calculateValue(n));
}