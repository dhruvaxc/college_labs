#include <stdio.h>
#include <stdlib.h>

int main() {
    int r1, c1, r2, c2, i, j, k;
    int **A, **B, **C;
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);
    if (c1 != r2) 
    {
        printf("Matrix multiplication not possible\n");
        return 0;
    }
    A = malloc(r1 * sizeof(int *));
    for (i = 0; i < r1; i++) 
    {
        A[i] = malloc(c1 * sizeof(int));
    }
    B = malloc(r2 * sizeof(int *));
    for (i = 0; i < r2; i++) 
    {
        B[i] = malloc(c2 * sizeof(int));
    }
    C = malloc(r1 * sizeof(int *));
    for (i = 0; i < r1; i++) 
    {
        C[i] = malloc(c2 * sizeof(int));
    }
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r1; i++) 
    {
        for (j = 0; j < c1; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r2; i++) 
    {
        for (j = 0; j < c2; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    for (i = 0; i < r1; i++) 
    {
        for (j = 0; j < c2; j++) 
        {
            C[i][j] = 0;
            for (k = 0; k < c1; k++) 
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("Product of matrices:\n");
    for (i = 0; i < r1; i++) 
    {
        for (j = 0; j < c2; j++) 
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < r1; i++) 
    {
        free(A[i]);
    }
    free(A);
    for (i = 0; i < r2; i++) 
    {
        free(B[i]);
    }
    free(B);
    for (i = 0; i < r1; i++) 
    {
        free(C[i]);
    }
    free(C);
    return 0;
}