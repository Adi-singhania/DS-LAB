// WAP in C to enter a matrix of m x m and check if its a sparse matrix or not then display it.
#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int m, i, j, zeroCount = 0;

    // Input the size of the matrix
    printf("Enter the size of the matrix (m x m): ");
    scanf("%d", &m);

    // Input the matrix elements
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] == 0) {
                zeroCount++;
            }
        }
    }

    // Check if the matrix is sparse
    if (zeroCount > (m * m) / 2) {
        printf("The matrix is a sparse matrix.\n");
    } else {
        printf("The matrix is not a sparse matrix.\n");
    }

    // Display the matrix
    printf("The entered matrix is:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

