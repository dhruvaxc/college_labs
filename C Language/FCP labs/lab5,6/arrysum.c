#include <stdio.h>
int main() 
{
    int a[10],b[10],c[10];
    printf("Enter the elements of first array:\n");
    for(int i = 0; i < 10; i++) 
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the elements of second array:\n");
    for(int i = 0; i < 10; i++) 
    {
        scanf("%d", &b[i]);
        c[i] = a[i] + b[i];
    }  
    printf("The array formed by the addition of the two array is:\n");
    for(int i = 0; i < 10; i++) 
    {
        printf("%d ", c[i]);
    }     
    return 0;
}