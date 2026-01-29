#include <stdio.h>
int main()
{
    int a,c;
    printf("What is the units of electricity comsumed :- ");
    scanf("%d",&a);
    if(a<=200)
    {
        c=a*0.5;
    }
    else if(a>200 && a<=400)
    {
        c=100+(a-200)*0.65;
    }
    else if(a>400 && a<=600)
    {
        c=230+(a-400)*0.8;
    }
    else if(a>600) 
    {
        c=425+(a-600)*125;
    }
    else
    {
        printf("Invalid input");
    }
    printf("The cost of units used is = %d",c);
    return 0;
}
