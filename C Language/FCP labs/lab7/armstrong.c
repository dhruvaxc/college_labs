#include <stdio.h>
#include <math.h>
int armstrong(int a);
int main()
{
  int a;
  printf("enter the number:-");
  scanf("%d", &a);
  armstrong(a);
}
int armstrong(int a)
{
  int b,c;
  float d,v;
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