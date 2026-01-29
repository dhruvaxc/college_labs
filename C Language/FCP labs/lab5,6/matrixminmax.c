#include <stdio.h>
int main()
{
    int a[3][3];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int min = a[0][0], max = a[0][0];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] < min)
                min = a[i][j];
            if (a[i][j] > max)
                max = a[i][j];
        }
    }
    printf("Minimum element: %d\n", min);
    printf("Maximum element: %d\n", max);
    return 0;
}