#include <stdio.h>
int main()
{
    int a, f;
    f = 1;
    printf("enter the number:-");
    scanf("%d", &a);
    if (a < 0)
    {
        printf("enter positive numbers only!");
    }
    else
    {
        for (int i = 0; a > 0; --a)
        {
            f = f * a;
        }
        printf("Factorial of the number is %d", f);
    }
    return 0;
}