#include <stdio.h>
int main()
{
    int a;
    printf("enter the number:-");
    scanf("%d", &a);
    printf("The factors of the number are:\n");
    for (int i=1; i<=a ;++i)
        {  
            if (a%i==0)
            {
                printf("%d\n",i);
            }
        }
    return 0;
}