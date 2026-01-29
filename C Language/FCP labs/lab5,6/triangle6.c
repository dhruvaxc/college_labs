#include <stdio.h>
int main() 
{
  for(int i=0,a=1; i<4; i++,a=1) 
  {
    for(int j=0,b=i;j<=6;j++) 
    {
        if(j<4)
        {
            if(j>=(3-i))
            printf("%d",a++);
            else
            printf(" ");
        }
        else
        {
            if(j<=(3+i))
            printf("%d",b--);
            else
            printf(" ");
        }
    }
    printf("\n");
  }
  return 0;
}