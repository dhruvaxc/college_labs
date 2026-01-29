#include <stdio.h>
int main()
{
    for (int i = 1; i < 10; i++)
    {

        for (int k,j=k= 1; j <= i,k<=17; j++,k++)
        {
            
            printf(" ");
            if (j == 1 || j == i||k==17 ||k==(18-i))
                {
                    printf("*");
                }
                else if (i == 9)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            
        }
        printf("\n");
    }
    return 0;
}