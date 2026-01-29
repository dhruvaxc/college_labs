#include <stdio.h>
int prime(int a);
int main()
{
    int a,b=0;
    printf("Enter the number you want to check:-");
    scanf(" %d" ,&a);
    b=prime(a);
    if (b==1)
    printf("number is prime");
    else
    printf("number is not prime");
    return 0;
}
int prime(int a)
{
    for(int i=2;i<a;i++)
    {
        if((a%i)==0)
        {
            return 0;
            break;
        }
        else
        {
            return 1;
        }
    }
}