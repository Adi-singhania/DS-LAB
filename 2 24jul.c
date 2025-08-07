// WAP in C to display the elements of two matrices (2D array) of size 4x4, then perform the following operations:
// a) Perform the addition of two matrices.
// b) Perform the transpose of a matrix.
// c) Add a matrix with its transpose.
// d) Multiply two matrices.

#include <stdio.h>
int main()
{
    int a[4][4], b[4][4], sum[4][4], transA[4][4], transB[4][4], sumTransA[4][4], product[4][4];

    printf("Enter elements of matrix A :\n");
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            scanf("%d", &a[i][j]);

    printf("Enter the elements of matrix B :\n");
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            scanf("%d", &b[i][j]);

    // Addition
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            sum[i][j] = a[i][j] + b[i][j];

    // Transpose
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            transA[j][i] = a[i][j];

    // Sum of transpose
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            sumTransA[i][j] = a[i][j] + transA[i][j];

    // Multiplication
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
        {
            product[i][j] = 0;
            for (int k = 0; k < 4; k++)
                product[i][j] += a[i][k] * b[k][j];
        }

    printf("Sum of matrices :\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    printf("Transpose of matrix A :\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
            printf("%d ", transA[i][j]);
        printf("\n");
    }

    printf("Sum of transpose and matrix A :\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
            printf("%d ", sumTransA[i][j]);
        printf("\n");
    }

    printf("Product of matrices :\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
            printf("%d ", product[i][j]);
        printf("\n");
    }

    return 0;
}
