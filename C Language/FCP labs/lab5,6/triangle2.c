#include <stdio.h>
int main() 
{
  for(int i=0; i<5; i++) 
  {
    for(int j=0,b=1;j<5;j++) 
    {
      int a=(j>=(4-i))?printf("%d",b++):printf(" ");
    }
    printf("\n");
  }
  return 0;
}