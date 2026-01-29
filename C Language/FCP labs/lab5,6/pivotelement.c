#include <stdio.h>
int main()
{
    int a[10] = {54, 63, 91, 1, 6, 9, 13, 16, 18, 32};
    int l = 0, h = 9, m;
    while (l <= h)
    {
        m = (l + h) / 2;
        if (m > 0 && a[m] < a[m - 1])
        {
            printf("Pivot element is %d at index %d\n", a[m], m);
            break;
        }
        else if (m < 9 && a[m] > a[m + 1])
        {
            printf("Pivot element is %d at index %d\n", a[m + 1], m + 1);
            break;
        }
        if (a[m] >= a[l])
            l = m + 1;
        else
            h = m - 1;
    }
    return 0;
}