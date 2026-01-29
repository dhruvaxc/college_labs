#include <stdio.h>
int main() 
{   
    int n;
    printf("enter the number of elements of the array:-");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements:\n");
    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i <n; i++) 
    {
        for(int j=i;j<n;j++)
        {
           if (a[j] > a[j + 1]) 
            {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;

            }
        }
    }
    printf("Sorted array is:\n");
    for(int i = 0; i < n; i++)  
    {
        printf("%d\n", a[i]);
    }
    return 0;
}