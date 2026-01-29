#include <stdio.h>
int main() 
{
    int m,p,c,e,cm;
  printf("Enter Marks of maths:-");
  scanf("%d",&m);
  printf("Enter Marks of physics:-");
  scanf("%d",&p);
  printf("Enter Marks of chemistry:-");
  scanf("%d",&c);
  printf("Enter Marks obtained in entrance exam:-");
  scanf("%d",&e);
  cm =m/2+p/2+c/2+e;
  printf("The cutoff marks for the student is %d",cm);
  return 0;
}