#include <stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],s=0;
    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    } 
    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < 3; i++)
    {
       for (int j = 0; j < 3; j++)
       {
          scanf("%d", &b[i][j]);
       }
    }
    for (int i = 0; i < 3; i++) 
    {
       for (int j = 0; j < 3; j++)
       {
            for(int k = 0; k < 3; k++)
            {
                s = s + a[i][k] * b[k][j];
            }
            c[i][j] = s;
            s = 0;
       }
    }
    printf("Product of the two matrices:\n");
    for (int i = 0; i < 3; i++) 
    {
       for (int j = 0; j < 3; j++)
       {
          printf("%d ", c[i][j]);
       }
       printf("\n");
    }
    return 0;
}