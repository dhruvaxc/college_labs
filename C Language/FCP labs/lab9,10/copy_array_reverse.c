#include <stdio.h>
int main() 
{
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n], b[n];
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n; i++) 
    {
        b[i] = a[n - 1 - i];
    }
    printf("Reversed array:\n");
    for(i = 0; i < n; i++) 
    {
        printf("%d ", b[i]);
    }
    return 0;
}