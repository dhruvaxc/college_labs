#include <stdio.h>
int interchange(int a , int b);
int main()
{
    int a,b;
    printf("enter first number:-");
    scanf("%d" ,&a);
    printf("enter second number:-");
    scanf("%d" ,&b);
    interchange(a,b);
    return 0;
}
int interchange(int a , int b)
{
    int t;
    t=a;
    a=b;
    b=t;
    printf("enter first number:- %d" ,a);
    printf("\nenter second number:- %d" ,b);
    return 0;
}