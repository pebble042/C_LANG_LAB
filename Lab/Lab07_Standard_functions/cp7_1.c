#include <math.h>
#include <stdio.h>

int main() {
    float aValue, bValue, cValue, discriminant, x1, x2;
    printf("Please Enter a b c: ");
    scanf("%f %f %f", &aValue, &bValue, &cValue);

    // Discriminant
    discriminant = pow(bValue, 2) - (4 * aValue * cValue);

    if (discriminant >= 0) {
        x1 = (-bValue + sqrt(discriminant)) / (2 * aValue);
        x2 = (-bValue - sqrt(discriminant)) / (2 * aValue);

        printf("Result x1 = %.03f\n", x1);
        printf("Result x2 = %.03f", x2);
    } else {
        printf("There is no solution for this question!!!");
    }

    return 0;
}