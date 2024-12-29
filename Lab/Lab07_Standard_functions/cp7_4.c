#include <math.h>
#include <stdio.h>

int main() {
    int number, mode, i;
    float cube_root, cube;
    printf("Please enter value (n) : ");
    scanf("%d", &number);

    do {
        printf("Please Enter mode <1=cube, 2=cube root, 0=quit> ");
        scanf("%d", &mode);

        if (mode == 0) {
            printf("Good bye");
        } else if (mode == 1) {
            cube = pow(number, 3);
            printf("%d cubed = %.0f", number, cube);
        } else if (mode == 2) {
            cube_root = pow(number, 1.0 / 3);
            printf("%d cube root = %.02f", number, cube_root);
        } else {
            printf("Mode error, try again\n");
        }
    } while (mode > 2);

    return 0;
}
