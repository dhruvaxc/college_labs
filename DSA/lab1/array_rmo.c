#include <stdio.h>
int main() 
{
    int r, c;
    printf("Enter number of rows and columns: ");
    scanf("%d", &r);
    scanf("%d", &c);
    int arr[r][c];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < r; i++) 
    {
        for (int j = 0; j < c; j++) 
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The matrix is:\n");
    for (int i = 0; i < r; i++) 
    {
        for (int j = 0; j < c; j++) 
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}