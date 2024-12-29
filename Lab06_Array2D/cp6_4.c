#include <stdio.h>
#define MAX 10

void initial_matrix(int A[][MAX], int numRow, int numCol, int init_value);

int main() {
    int i, j, k;

    /* ------- Matrix A ------- */
    printf("Matrix A\n");
    int matA[MAX][MAX] = {}, row_A, col_A;
    printf("Number of rows = ");
    scanf("%d", &row_A);

    printf("Number of columns = ");
    scanf("%d", &col_A);

    for (i = 0; i < row_A; i++) {
        for (j = 0; j < col_A; j++) {
            printf("matA(%d,%d)= ", i + 1, j + 1);
            scanf("%d", &matA[i][j]);
        }
    }

    printf("Matrix A =\n");
    for (i = 0; i < row_A; i++) {
        for (j = 0; j < col_A; j++) {
            printf("%5d", matA[i][j]);
        }
        printf("\n");
    }

    /* ------- Matrix B ------- */
    printf("\nMatrix B\n");
    int matB[MAX][MAX] = {}, row_B, col_B;
    printf("Number of rows = ");
    scanf("%d", &row_B);

    printf("Number of columns = ");
    scanf("%d", &col_B);

    for (i = 0; i < row_B; i++) {
        for (j = 0; j < col_B; j++) {
            printf("matB(%d,%d)= ", i + 1, j + 1);
            scanf("%d", &matB[i][j]);
        }
    }

    printf("\nMatrix B =\n");
    for (i = 0; i < row_B; i++) {
        for (j = 0; j < col_B; j++) {
            printf("%5d", matB[i][j]);
        }
        printf("\n");
    }

    /* ------- Matrix C = A + B ------- */
    printf("\nMatrix C = A + B \n");
    int matC[MAX][MAX] = {}, row_C, col_C;

    for (i = 0; i < row_A; i++) {
        for (j = 0; j < col_A; j++) {
            matC[i][j] = matA[i][j] + matB[i][j];
        }
    }

    for (i = 0; i < row_A; i++) {
        for (j = 0; j < col_A; j++) {
            printf("%5d", matC[i][j]);
        }
        printf("\n");
    }

    /* ------- Matrix C = A x B ------- */
    printf("\nMatrix C = A x B \n");

    initial_matrix(matC,row_A ,col_B , 0);

    for (i = 0; i < row_A; i++) {
        for (j = 0; j < col_B; j++) {
            matC[i][j] = 0;

            for (k = 0; k < row_B; k++) {
                matC[i][j] += matA[i][k] * matB[k][j];
            }
            printf("%5d", matC[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void initial_matrix(int A[][MAX], int numRow, int numCol, int init_value){
int i,j;
	for (i = 0; i < numRow; ++i) {
      for (j = 0; j < numCol; ++j) {
         A[i][j] = init_value;
      }
   }
}