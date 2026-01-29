#include <stdio.h>
int main() 
{
  for(int i=0; i<5; i++) 
  {
    for(int j=0,a=65;j<=i;j++) 
    {
      printf("%c ",a++);
    }
    printf("\n");
  }
  return 0;
}