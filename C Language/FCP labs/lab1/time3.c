#include <stdio.h>
int main() 
{
  int a,b,c,d;
  printf("Enter time in seconds:- ");
  scanf("%d", &a);
  d=a/(24*3600);
  a=a%(24*3600);
  c=a/3600;
  a=a%3600;
  b=a/60;
  a=a%60;
  printf("\n The time is %d days \n%d hours:\n%d minute \n%d seconds ", d,c,b,a);
  return 0;
}