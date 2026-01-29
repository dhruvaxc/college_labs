#include <stdio.h>
int main()
{
    int a,b;
    b = 0;
    printf("enter the number:-");
    scanf("%d", &a);
    for (int i=2; i<a ;++i)
        {  
            if (a%i==0)
            {
                b++;
            }
        }
    if(b==0 && a!=1)
    {
        printf("The number is prime");
    }
    else if (b!=0 && a!=1)
    {
        printf("The number composite");
    }
    else
    {
        printf("The number is neither prime nor composite i.e. 1");
    }
    return 0;
}