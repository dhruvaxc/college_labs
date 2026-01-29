/*29. PROGRAM TO CHECK WHETHER A NO IS PALINDROM OR NOT.*/
#include <stdio.h>
#include <math.h>
int main()
{
  int a,n=0;
  float b,c=0,d;
  printf("enter the number:-");
  scanf("%d", &a); 
    for(int m=a;m>0;m=m/10)
    {
        n++;
    }
    d=(float) n-1;
    for(int m=a;m>0;m=m/10)
    {
        b=m%10;
        c=c+(b*pow(10,d));
        --d;
    }
    a=(c==a)?printf("The number is palindrome"):printf("The number is not palindrome");
    return 0;
}