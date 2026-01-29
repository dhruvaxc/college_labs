#include <stdio.h>
int factorial(int a);
int main()
{
    int n,r,z,ncr;
    printf("Enter the value of n :-");
    scanf("%d" ,&n);
    printf("Enter the value of r :-");
    scanf("%d" ,&r);
    if(n<r || n<0 || r<0)
    printf("enter valide input");
    z=n-r;
    n=factorial(n);
    r= factorial(r);
    z=factorial(z);
    ncr=n/(r*z);
    printf("the value of ncr of the given number is :- %d" ,ncr);
}
int factorial(int a)
{
    int b=1;
    for(int i=1;i<=a;i++)
    {
        b=b*i;
    }
    return b;
}