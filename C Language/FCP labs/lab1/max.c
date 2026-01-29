#include <stdio.h>
int main() 
{
  int a,b,c;
  printf("enter the three number:-");
  scanf("%d%d%d",&a,&b,&c);
  if (a>b)
  {
        if (a>c)
        {
            printf("The number with the maximum value is %d",a);
        }
        else
        {
            printf("The number with the maximum value is %d",c);
        }
  }
  else
  {
        if (b>c)
        {
            printf("The number with the maximum value is %d",b);
        }
        else
        {
            printf("The number with the maximum value is %d",c);
        }
  }
  return 0;
}