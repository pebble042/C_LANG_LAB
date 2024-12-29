#include <math.h>
#include <stdio.h>
#define PI 3.14159

float VolumeCylinder(float d, float h) {
    float v;
    v = PI * pow(d / 2.0, 2) * h;
    return v;
}

int main() {
    float d, h;
    printf("Enter d(diameter) : ");
    scanf("%f", &d);
    printf("Enter h(height) : ");
    scanf("%f", &h);

    printf("Volume cylinder = %.3f", VolumeCylinder(d, h));
    return 0;
}