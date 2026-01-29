/*30. PROGRAM TO REVERSE OF A GIVEN NO.*/
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
    printf("The reverse of the number is %d", (int)c);
    return 0;
}