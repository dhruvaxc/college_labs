#include <stdio.h>
int main() 
{
  char b;
  int a;
  printf("enter the character:-");
  scanf("%c",&b);
  a=(int)b;
  if (a>64&&a<91)
  {
    printf("The given character is a capital letter ");
  }
  else if (a>96&&a<123)
  {
    printf("The given character is a lowercase letter");
  }
  else if (a>47&&a<58)
  {
    printf("The given character is a digits between 0 to 9");
  }
  else if (a>32&&a<48||a>57&&a<65||a>90&&a<97||a>122&&a<127)
  {
    printf("The given character is a special symbol");
  }
  else
  {
   printf("the entered value in not a letter, digit, or a symbol");
  }
  return 0;
}