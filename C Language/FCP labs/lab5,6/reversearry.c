#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of elements of the array:-");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0,j=n-1; i <n/2; i++,j--)
    {
        int t = a[i];
        a[i] = a[j];
        a[j] = t;
    }
    printf("Sorted array is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}