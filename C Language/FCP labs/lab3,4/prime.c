/*27. PROGRAM TO CHECK WHETHER A NO IS PRIME OR NOT.*/
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
    if(b==0)
    {
        printf("The number is prime");
    }
    else
    {
        printf("The number is not prime");
    }
    return 0;
}