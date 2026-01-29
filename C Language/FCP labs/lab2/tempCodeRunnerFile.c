#include <stdio.h>
int main()
{
    int a, f;
    float e;
    e = 1;
    printf("enter the number:-");
    scanf("%d", &a);
    printf("enter the power:-");
    scanf("%d", &f);
    printf("The exponential of the given number is %f", e);
    if (f > 0)
    {
        for (; f > 0; --f)
        {
            e = e * a;
        }
    }
    else
    {
        for (; f < 0; ++f)
        {
            e = e / a;
        }
    }
    printf("The exponential of the given number is %f", e);
    return 0;
}