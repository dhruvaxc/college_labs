/*34. PROGRAM TO PRINT FIBONACCI SERIES.(0,1,1,2,3...)*/
#include <stdio.h>
int main() 
{
  int a,b=0,c=1,d;
  printf("How many numbers of the fibonacci sequence do you want :-");
  scanf("%d",&a);
  printf("The required fibonacci sequence is:\n %d\n %d\n",b,c);
  while(a>0)
  {
      d=b+c;
      b=c;
      c=d;
      a--;
    printf(" %d\n",d);
  }
  return 0;
}