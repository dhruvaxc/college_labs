#include <stdio.h>
int main() 
{
  int no,g,t=0;
  no=48;
  printf("You have 5 attempts to guess the number\n");
  printf("Guess a number between 1 to 100\n");
  for(t=0;t<5; t++)
  {
      scanf("%d",&g);
        if(g<no/2)
        {
        printf("Your guess is too low\n");
        }
        else if(g>(no+(no/2)))
        {
        printf("Your guess is too high\n");
        }
        else if(g<no && g>(no/2))
        {
        printf("Your guess is a litte low\n");
        }
        else if(g>no && g<(no+(no/2)))
        {
        printf("Your guess is a litte high\n");
        }
        else if("g==no")
        {
          printf("You guessed it right\n");
          break;
        }
        else if (t==4&&g!=no)
        {
          printf("You have exhausted your 5 attempts\n");
        }
  }
  return 0;
}