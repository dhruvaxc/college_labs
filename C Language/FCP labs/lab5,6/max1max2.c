#include <stdio.h>
int main()
{
    int n, m1, m2;
    printf("how many numbers do you want to compare :-");
    scanf("%d", &n);
    int a[n];
    printf("enter the numbers :-");
    for (int z = 0; z < n; z++)
    {
        scanf("%d", &a[z]);
    }
    m1 = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > m1)
        {
            m1 = a[i];
        }
    }
    m2 = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] < m1 && a[i] > m2)
        {
            m2 = a[i];
        }
    }
    printf("The largest number is = %d\n", m1);
    printf("The second largest number is = %d\n", m2);
    return 0;
}