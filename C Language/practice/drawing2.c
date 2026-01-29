#include <stdio.h>
int main() 
{
 for(int i=1;i<10;i++)
{
    for(int j=1;j<=i;j++)
    {
       if (j==1 ||j==i)
       {
           printf("*  ");
       }
       else if (i==9)
       {
           printf("*  ");
       }
       else
       {
           printf("   ");
       }
    }
    printf("\n");
}
  return 0;
}