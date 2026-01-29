#include <stdio.h>
int main()
{
    int a[3][3],s=0;
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    } 
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            s+=a[i][j];
        }
        printf("Sum of row %d: %d\n",i+1,s);
        s=0;
    }
    return 0;
}