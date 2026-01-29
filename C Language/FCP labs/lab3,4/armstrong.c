/*28. PROGRAM TO CHECK WHETHER A NO IS ARMSTRONG OR NOT.*/
#include <stdio.h>
#include <math.h>
int main()
{
  int a,b,c;
  float d,v;
  printf("enter the number:-");
  scanf("%d", &a);
    b=a;
    c=0;v=0;
    for(; b>0;b=b/10)
    {
        ++c;
    }
        b=a;
    for(; b>0;b=b/10)
    {
        d=b%10;
        v=v+pow(d,c);
    }
    if(v==a)
    {
        printf("The number is an armstrong number");
    }
    else
    {
        printf("The number is not an armstrong number");
    }
    return 0;
}