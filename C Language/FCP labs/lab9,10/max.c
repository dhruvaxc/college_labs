#include <stdio.h>
int main() 
{
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    int *p = a;
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) 
    {
        scanf("%d", p + i);
    }
    int max = *p;
    for(i = 1; i < n; i++) 
    {
        if(*(p + i) > max) 
        {
            max = *(p + i);
        }
    }
    printf("Biggest element: %d\n", max);
    return 0;
}