#include <stdio.h>
int main()
{
 float a,b,c,s;
  printf("enter principle value, rate, and time:");
  scanf("%f%f%f",&a,&b,&c);
  s=a*b*c/100;
  printf("the simple intrest is : %f",s);
  return 0;
}