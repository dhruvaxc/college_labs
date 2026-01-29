#include <stdio.h>
int main() 
{
    int a,b,c,d,e,f;
  printf("Enter your base salary:-");
  scanf("%d", &a);
  printf("Enter your yearly bonus:-");
  scanf("%d", &b);
  printf("Enter your perks cost:-");
  scanf("%d", &c);
  printf("Enter your Dearness Allowance percentge:-");
  scanf("%d", &d);
  f=a*d/100;
  e=a+b+c+f;
  printf("your gross salary is %d",e);
  return 0;
}