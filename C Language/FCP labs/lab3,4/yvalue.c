/* 24. WRITE A C PROGRAM TO FIND THE VALUE OF Y USING
1+x where n=1
1+x/n where n=2
Y(x,n) = 1 +x» when n=3
1+nx when n>3 or n<1
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int x,n,y;
    printf("Enter value of X:- ");
    scanf("%d",&x);
    printf("Enter a integer value for n:- ");
    scanf(" %d",&n);
    if(n==1)
    {
        y=1+x;
    }
    else if(n==2)
    {
        y=1+(x/n);
    }
    else if(n==3)
    {
        y=1+(pow(x,n));
    }
    else
    {
        y=1+(n*x);
    }
    printf("Value of Y is:- %d",y);
    return 0;
}
