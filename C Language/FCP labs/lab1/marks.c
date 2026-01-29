#include <stdio.h>
int main() 
{
    int a,b,c,d,e,f,g;
  printf("Enter Marks of 5 subjects:-");
  scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
  f=a+b+c+d+e;
  g=f/5;
  printf("The total marks attained is %d and pecentage is %d ",f,g);
  return 0;
}