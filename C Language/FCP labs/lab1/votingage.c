#include <stdio.h>
int main() 
{
    int a;
    printf("enter your age :-");
    scanf("%d" ,&a);
    if (a>18)
        {
        printf("you are elegible for voting");    
        }
    else
        {
        printf("you are not elegible for voting");
        }
    return 0;
}