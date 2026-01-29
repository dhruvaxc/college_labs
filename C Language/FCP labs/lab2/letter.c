#include <stdio.h>
int main() 
{
 char a,b;
 int c;
  printf("enter the letter:-");
  scanf("%c",&a);
  c=(int)a;
  b=(c>=95 && c<=122)?(printf("The given character is a lowercase letter")):(printf("The given character is a uppercase letter"));
  return 0;
}