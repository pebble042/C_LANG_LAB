#include <stdio.h>
int intPower(int a, int b);
int inputExp(void);
void checkNumber(int x);

int main() {
    int a, b, c;
    printf("Integer Power Calculation\n");
    printf("Base = ");
    scanf("%d", &a);

    b = inputExp();
    c = intPower(a, b);
    printf("a^b = %d\n", c);
    checkNumber(a);
    checkNumber(b);
    checkNumber(c);
    return 0;
}

int intPower(int a, int b) {
    int result = 1, i;
    if (b == 0) return 1;
    for (i = 0; i < b; i++) result *= a;
    return result;
}

int inputExp(void) {
    int exp;
    printf("Exponent: ");
    scanf("%d", &exp);
    while (exp < 0) {
        printf("Please enter only positive number\n");
        printf("Exponent: ");
        scanf("%d", &exp);
    }
    return exp;
}
void checkNumber(int x) {
    if (x % 2 == 0)
        printf("%d is an even number\n", x);
    else
        printf("%d is an odd number\n", x);
}
