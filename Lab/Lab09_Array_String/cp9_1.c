#include <stdio.h>
#define MAX 100
int inputArray(int arr[]);
void absolute(int arr[], int n);
float average(int arr[], int n);
void show(int arr[], int n);

int main() {
    int A[MAX], num;
    printf("Input an array of integers\n");
    num = inputArray(A);

    printf("Original Array\n");
    show(A, num);
    printf("Average = %.2f\n", average(A, num));
    absolute(A, num);
    printf("New Array\n");
    show(A, num);
    printf("Average = %.2f\n", average(A, num));
    return 0;
}

float average(int arr[], int n) {
    float total = 0;
    int i;

    for (i = 0; i < n; i++) {
        total += arr[i];
    }
    return total / n;
}

int inputArray(int arr[]) {
    int i, n;
    printf("Number of data in array : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("arr[%d]=", i);
        scanf("%d", &arr[i]);
    }
    return n;
}

void absolute(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] < 0) {
            arr[i] = -1 * arr[i];
        }
    }
}

void show(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}