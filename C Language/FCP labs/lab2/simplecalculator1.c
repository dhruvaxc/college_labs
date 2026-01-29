#include <stdio.h>
int main()
{
    int a,b;
    char c;
    printf("First number :- ");
    scanf("%d",&a);
    printf("Arithmetic opperator (+,-,/,*) :- ");
    scanf(" %c",&c);
    printf("Second number :- ");
    scanf("%d",&b);
    if(c=='+')
    {
        printf("Addition of two numbers is = %d",a+b);
    }
    else if(c=='-')
    {
        printf("Subtraction of two numbers is = %d",a-b);
    }
    else if(c=='*')
    {
        printf("Multiplication of two numbers is = %d",a*b);
    }
    else if(c=='/') 
    {
        printf("Division of two numbers is = %d",a/b);
    }
    else
    {
        printf("Invalid operator");
    }
    return 0;
}
