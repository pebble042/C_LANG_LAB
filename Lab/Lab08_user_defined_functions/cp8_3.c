#include <stdio.h>

int a = 1;
float x = 2.5;

int F1(int b) {
    a++;
    x = x * a;
    b = b + a;
    printf("In F1, a=%d, b=%d, x=%.2f\n", a, b, x);
    return b;
}
void F2(float y);

int main() {
    int b = 4, m = 0;
    a++;
    x++;
    printf("In main, b=%d, m=%d, a=%d, x=%.2f\n", b, m, a, x);
    m = F1(b);
    printf("In main, b=%d, m=%d, a=%d, x=%.2f\n", b, m, a, x);
    F2(m);
    printf("In main, b=%d, m=%d, a=%d, x=%.2f\n", b, m, a, x);
    return 0;
}
void F2(float y) {
    float x = 1.5;
    x = x + y;
    a++;
    y++;
    printf("In F2, x=%.2f, y=%.2f\n", x, y);
}