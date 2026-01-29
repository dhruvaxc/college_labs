#include <stdio.h>
int main() 
{
  for(int i=0,a=65; i<5; i++) 
  {
    for(int j=0;j<=i;j++) 
    {
      printf("%c ",a);
    }
    a++;
    printf("\n");
  }
  return 0;
}