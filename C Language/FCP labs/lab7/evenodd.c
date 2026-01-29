#include <stdio.h>
int evenodd( int a);
int main()
{
  int a;
  printf("enter the number:-");
  scanf("%d",&a);
  evenodd(a);
}
int evenodd( int a)
{
if (a%2==0)
  {
    printf("The given number is even");
  }
  else
  {
    printf("The given number is odd");
  }
  return 0;
}