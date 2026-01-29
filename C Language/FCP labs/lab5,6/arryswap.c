#include <stdio.h>
int main()
{
    int a[10], b[10], c;
    printf("Enter the elements of first array:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the elements of second array:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &b[i]);
        c = b[i];
        b[i] = a[i];
        a[i] = c;
    }
    printf("The arrays after swapping are:\n");
    printf("First array:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nSecond array:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", b[i]);
    }
    return 0;
}