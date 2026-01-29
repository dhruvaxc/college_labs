#include <stdio.h>
int main() 
{   int n,m,t;
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
        m=a[i];
        t=i;
        for(int j=i;j<n;j++)
        {
            if(a[j]<m)
            {
                m=a[j];
                t=j;
            }
        }
        a[t]=a[i];
        a[i]=m;
    }
    printf("Sorted array is:\n");
    for(int i = 0; i < n; i++)  
    {
        printf("%d\n", a[i]);
    }
    return 0;
}