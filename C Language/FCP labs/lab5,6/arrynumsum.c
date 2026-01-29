#include <stdio.h>
int main() 
{
    int s = 0;
    int a[10];
    printf("Enter the elements:\n");
    for(int i = 0; i < 10; i++) 
    {
        scanf("%d", &a[i]);
        s += a  [i];
    }
    printf("Sum of array elements: %d\n", s);
    
    return 0;
}