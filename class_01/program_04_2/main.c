// Write a matrix multiplication program within main method, using
// pointer-indexing. Multiply two 2 x 2 matrices (no user input, just declare
// and display)

#include <stdio.h>

int main() {
    // Declare and initialize two 2x2 matrices
    int a[2][2] = {{1, 2}, {3, 4}};
    int b[2][2] = {{5, 6}, {7, 8}};
    int result[2][2];

    // Matrix multiplication using pointer indexing
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            *(*(result + i) + j) = 0;
            for (int k = 0; k < 2; k++) {
                *(*(result + i) + j) += *(*(a + i) + k) * *(*(b + k) + j);
            }
        }
    }

    // Display first matrix
    printf("Matrix A:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", *(*(a + i) + j));
        }
        printf("\n");
    }

    // Display second matrix
    printf("\nMatrix B:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", *(*(b + i) + j));
        }
        printf("\n");
    }

    // Display result matrix
    printf("\nResult (A x B):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", *(*(result + i) + j));
        }
        printf("\n");
    }

    return 0;
}