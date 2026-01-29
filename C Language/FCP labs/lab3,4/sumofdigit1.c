/*31. PROGRAM TO PRINT SUM OF INDIVIDUAL DIGITS OF A ‘N’ DIGIT NO.*/
#include <stdio.h>
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
    printf("Sum of digits of given number is %d", (int)c);
    return 0;
}