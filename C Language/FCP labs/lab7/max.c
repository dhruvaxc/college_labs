#include <stdio.h>
int max(int a[] , int n);
int main()
{
    int n;
    printf("how many numbers do you want to compare :-");
    scanf("%d", &n);
    int a[n];
    printf("enter the numbers :-");
    for (int z = 0; z < n; z++)
    {
        scanf("%d", &a[z]);
    }
    max(a,n);
}
int max(int a[] , int n)
{
    int m1;
    m1 = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > m1)
        {
            m1 = a[i];
        }
    }
    printf("Maximum number of the given data is :-%d" ,m1);
}