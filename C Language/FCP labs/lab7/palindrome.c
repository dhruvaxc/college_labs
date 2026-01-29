#include <stdio.h>
#include <math.h>
int palindrome(int a);
int main()
{
    int a;
    printf("enter the number:-");
    scanf("%d", &a);
    palindrome(a);
}
int palindrome(int a)
{
    int n = 0;
    float b, c = 0, d;
    for (int m = a; m > 0; m = m / 10)
    {
        n++;
    }
    d = (float)n - 1;
    for (int m = a; m > 0; m = m / 10)
    {
        b = m % 10;
        c = c + (b * pow(10, d));
        --d;
    }
    a = (c == a) ? printf("The number is palindrome") : printf("The number is not palindrome");
    return 0;
}