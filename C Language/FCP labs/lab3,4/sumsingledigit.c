/*35. READ A NUMBER N AND PRINT A SINGLE DIGIT ANSWER SHOWING SUM OF DIGIT Of N*/
#include <stdio.h>
#include <math.h>
int main()
{
  int a;
  float b,c=0;
  printf("enter the number:-");
  scanf("%d", &a); 
    for(int m=a;m>0;m=m/10)
    {
        b=m%10;
        c=c+b;
    }
    while(c>9)
    {
        a=(int)c;
        c=0;
        for(int m=a;m>0;m=m/10)
        {
            b=m%10;
            c=c+b;
        }
    }
    printf("The single digit sum of the number is %d", (int)c);
    return 0;
}