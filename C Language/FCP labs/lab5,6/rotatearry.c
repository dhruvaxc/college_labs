#include <stdio.h>
int main()
{
    int n,a;
    printf("Enter number of elements\n");
    scanf("%d", &n);
    int b[n],r[n];
    printf("Enter %d integers\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    printf("enter the number by which you want to rotate the array:-");
    scanf("%d" ,&a);
    for (int i = 0; i < n; i++)
    {
        r[i]=b[(i+a)%n];
    }
    printf("the original array is \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }
     printf("the rotated array is \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", r[i]);
    }
    return 0;
}