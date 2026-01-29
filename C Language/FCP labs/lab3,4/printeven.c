#include <stdio.h>
int main() 
{
  int a;
  printf("enter the number:-");
  scanf("%d",&a);
  printf("The even numbers upto %d are:\n",a);
  for(int i=2;i<=a;i+=2)
  {
    printf(" %d\n",i);
  }
  return 0;
}