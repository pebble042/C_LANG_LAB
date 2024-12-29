#include <math.h>
#include <stdio.h>

int q(float x, float y) {
    int q;
    if (x != 0 && y == 0) {
        q = 5;
    } else if (x == 0 && y != 0) {
        q = 6;
    } else if (x > 0 && y > 0) {
        q = 1;
    } else if (x < 0 && y > 0) {
        q = 2;
    } else if (x < 0 && y < 0) {
        q = 3;
    } else if (x > 0 && y < 0) {
        q = 4;
    } else {
        q = 0;
    }

    return q;
}

int main() {
    float x, y;
    printf("Enter point (x, y) : ");
    scanf("%f %f", &x, &y);

    if (q(x, y) == 5) {
        printf("(q=%d) X-Axis", q(x, y));
    } else if (q(x, y) == 6) {
        printf("(q=%d) Y-Axis", q(x, y));
    } else if (q(x, y) == 0) {
        printf("(q=%d) Origin", q(x, y));
    } else {
        printf("(q=%d) Quadrant %d ", q(x, y), q(x, y));
    }

    return 0;
}