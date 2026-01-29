#include <stdio.h>
int main() 
{
    float a,b,c;
  printf("Enter the base of the triangle:- ");
  scanf("%f", &a);
  printf("Enter the height of the triangle:- ");
  scanf("%f", &b);
  c=(float) a*b/2;
  printf("\n The area of the square is %f ", c);
  return 0;
}