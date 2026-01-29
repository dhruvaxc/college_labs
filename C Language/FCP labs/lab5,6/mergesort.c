#include <stdio.h>
int main()
{
    int a[6]= {1,34,12,56,74,92};
    int b[6]= {23,45,67,89,90,99};
    int c[12],m,t=0;
    for (int i = 0; i < 12; i++)
    {
        if(i<6)
            c[i] = a[i];
        else
            c[i] = b[i-6];
    }
    for (int i = 0; i < 12; i++)
    {
        m = c[i];
        t=i;
        for (int j = i; j < 12; j++)
        {
            if (c[j] < m)
            {
                m = c[j];
                t = j;
            }
        }
        c[t] = c[i];
        c[i] = m;
    }
    printf("Sorted array is:\n");
    for (int i = 0; i < 12; i++)
    {
        printf(" %d ,", c[i]);
    }
    return 0;
}