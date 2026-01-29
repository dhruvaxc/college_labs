#include <stdio.h>
int main() 
{
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n], b[n];
    int *p = a, *q = b;
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) 
    {
        scanf("%d", p + i);
    }
    for(i = 0; i < n; i++) 
    {
        *(q + i) = *(p + i);
    }
    printf("Copied array:\n");
    for(i = 0; i < n; i++) 
    {
        printf("%d ", *(q + i));
    }
    return 0;
}