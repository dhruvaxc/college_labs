#include <stdio.h>
int main()
{
    for (int i = 1; i < 10; i++)
    {

        for (int k,j=k= 1; j <=9,k<=9; j++,k++)
        {
            
            //printf(" ");
            if ( j <=(6-i)||k>=(4+i)|| (j <= (i-4) && i>5)||(k>=(14-i) && i>5))
                {
                    printf(" ");
                }
                else
                {
                    printf("*");
                }
            
        }
        printf("\n");
    }
    return 0;
}