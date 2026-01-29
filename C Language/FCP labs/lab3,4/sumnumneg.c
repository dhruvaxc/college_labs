#include <stdio.h>
int main()
{
    int n,s=0;
    printf("enter the numbers :-");
    while(1)
    {
        scanf("%d",&n);
        if(n>0)
        {
            s=s+n;
        }
        else 
        {
            break;
        }
    }
    printf("sum of positive numbers is %d",s);
    return 0;
}