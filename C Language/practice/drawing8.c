#include <stdio.h>
int main()
{
    for (int i = 1; i < 23; i++)
    {

        for (int k,j=k= 1; j <=22,k<=22; j++,k++)
        {
            
            printf(" ");
            if ( j <=(12-i)||k>=(11+i)|| (j <= (i-11) && i>9)||(k>=(34-i) && i>9))
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