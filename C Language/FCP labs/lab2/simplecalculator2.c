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
    switch(c)
    {
        case '+':
            printf("Addition of two numbers is = %d",a+b);
            break;
        case '-':
            printf("Subtraction of two numbers is = %d",a-b);
            break;
        case '*':
            printf("Multiplication of two numbers is = %d",a*b);
            break;
        case '/':
            printf("Division of two numbers is = %d", a/b);
            break;
        default:
            printf("Invalid operator");
    }
    return 0;
}