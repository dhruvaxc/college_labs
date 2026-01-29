#include <stdio.h>
int main() 
{
  int a;
  printf("enter the number:-");
  scanf("%d",&a);
  printf("The odd numbers upto %d are:\n",a);
  for(int i=1;i<=a;i+=2)
  {
    printf(" %d\n",i);
  }
  return 0;
}