#include <stdio.h>
int main() 
{
  for(int i=0; i<5; i++) 
  {
    for(int j=0,b=1;j<5;j++) 
    {
      int a=(j==i)?printf("%d ",1):printf("%d ",0);
    }
    printf("\n");
  }
  return 0;
}