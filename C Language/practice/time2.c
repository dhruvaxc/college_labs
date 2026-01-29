#include <stdio.h>
int main() 
{
  int a,b,c,d;
  printf("enter the number of hours:-");
  scanf("%d" ,&a);
  printf("enter the number of minute:-");
  scanf("%d" ,&b);
  printf("enter the number of secconds:-");
  scanf("%d" ,&c);
  d=(a*60*60)+(b*60)+c;
  printf("the total number of secconds:-%d",d);
  return 0;
}