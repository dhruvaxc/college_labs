#include <stdio.h>
int main() 
{
  int a,b=1;
  printf("enter the number:-");
  scanf("%d",&a);
  printf("The square numbers upto %d are:\n",a);
  for(int i=1;i<=a;)
  {
   printf("%d\n",i);
    b++;
    i=b*b;
  }
  return 0;
}