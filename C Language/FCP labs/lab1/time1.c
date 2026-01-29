#include <stdio.h>
int main() 
{
  int a,b,c,d;
  a=31558150;
  d=a/(24*3600);
  a=a%(24*3600);
  c=a/3600;
  a=a%3600;
  b=a/60;
  a=a%60;
  printf("\n The required time of revolution is %d days \n%d hours:\n%d minute \n%d seconds ", d,c,b,a);
  return 0;
}