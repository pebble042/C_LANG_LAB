#include <stdio.h>
void inputMat(int M[2][2]);
void showMat(int M[2][2]);

// Matrix C = A + B
void addMat(int A[2][2], int B[2][2], int C[2][2]);
// Matrix C = A x B
void multiplyMat(int A[2][2], int B[2][2], int C[2][2]);
int i, j;
int main() {
    // Matrix A
    int numA[2][2];
    printf("Enter matrix A\n");
    inputMat(numA);

    // Matrix B
    int numB[2][2];
    printf("Enter matrix B\n");
    inputMat(numB);

    // Matrix C = A + B
    int numC[2][2];
    printf("Enter matrix A+B\n");
    addMat(numA, numB, numC);
    showMat(numC);

    // Matrix C = A * B
    printf("Enter matrix A+B\n");
    multiplyMat(numA, numB, numC);
    showMat(numC);

    return 0;
}

void inputMat(int M[2][2]) {
    for (i = 0; i < 2; i++) {
        scanf("%d %d", &M[i][0], &M[i][1]);
    }
}

void showMat(int M[2][2]) {
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
}

void addMat(int A[2][2], int B[2][2], int C[2][2]) {
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

void multiplyMat(int A[2][2], int B[2][2], int C[2][2]) {
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            C[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}