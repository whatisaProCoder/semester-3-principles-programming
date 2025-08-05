#include <stdio.h>
#include <stdlib.h>

int** createMatrix(int rows, int cols) {
    int** matrix = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int*)malloc(cols * sizeof(int));
    }
    return matrix;
}

void freeMatrix(int** matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
}

int** matrixMult(int** a, int a_rows, int a_cols, int** b, int b_rows,
                 int b_cols) {
    if (a_cols != b_rows) {
        printf("Invalid Matrices for Multiplication!");
        return NULL;
    }

    int** product = createMatrix(a_rows, b_cols);

    for (int i = 0; i < a_rows; i++) {
        for (int j = 0; j < b_cols; j++) {
            product[i][j] = 0;
            for (int k = 0; k < a_cols; k++) {
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    return product;
}

void displayMatrix(int** m, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

void inputMatrix(int** m, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
}

int main() {
    int rows_a = 2, cols_a = 2, rows_b = 2, cols_b = 2;

    int** a = createMatrix(rows_a, rows_a);
    int** b = createMatrix(rows_b, rows_b);

    printf("\n--- Input Matrix \'a\' ---\n");
    inputMatrix(a, rows_a, cols_a);

    printf("\n--- Input Matrix \'b\' ---\n");
    inputMatrix(b, rows_b, cols_b);

    printf("\n---- Given Matrices ----\n");
    printf("-- Matrix \'a\' --\n");
    displayMatrix(a, rows_a, cols_a);
    printf("-- Matrix \'b\' --\n");
    displayMatrix(b, rows_b, cols_b);

    int** product = matrixMult(a, rows_a, cols_a, b, rows_b, cols_b);

    if (product != NULL) {
        printf("\n---- Product Matrix ----\n");
        displayMatrix(product, rows_a, cols_b);
        freeMatrix(product, rows_a);
    }

    freeMatrix(a, rows_a);
    freeMatrix(b, rows_b);

    return 0;
}