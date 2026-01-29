#include <stdio.h>
int fibonacci(int a);
int main() 
{
  int a;
  printf("How many numbers of the fibonacci sequence do you want :-");
  scanf("%d",&a);
  fibonacci(a);
  return 0;
}
int fibonacci(int a)
{
    int b=0,c=1,d;
    a-=2;
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