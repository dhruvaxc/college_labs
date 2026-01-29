#include <stdio.h>
int main() 
{
  int a,b,c,m;
  printf("enter the three number:-");
  scanf("%d%d%d",&a,&b,&c);
  m=(a>b)?((a>c)?a:c):((b>c)?b:c);
  printf("The number with the maximum value is %d",m);
  return 0;
}