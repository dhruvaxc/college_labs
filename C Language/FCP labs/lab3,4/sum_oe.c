/*26. PROGRAM TO PRINT SUM OF ALL ODD AND EVEN NO B/W 1 TO N.*/
#include <stdio.h>
int main()
{
    int a,b,f;
    f = 0;
    printf("enter the number:-");
    scanf("%d", &a);
    b=2;
    for (; b<=a ;b+=2)
        {  
             f=b+f;
        }
        printf("Sum of even numbers is %d\n",f);
    f=0;
    b=1;
    for (; b<=a ;b+=2)
        {  
             f=b+f;
        }
        printf("Sum of odd numbers is %d",f);
    return 0;
}