#include <stdio.h>
int main()
{
    int a,c;
    printf("What is the sales amount :- ");
    scanf("%d",&a);
    if(a<=500)
    {
        c=a/20;
    }
    else if(a>500 && a<=2000)
    {
        c=35+(a-500)/10;
    }
    else if(a>2000 && a<=5000)
    {
        c=185+(a-2000)*0.12;
    }
    else if(a>5000) 
    {
        c=a*0.125;
    }
    else
    {
        printf("Invalid input");
    }
    printf("The commission is = %d",c);
    return 0;
}
