#include <stdio.h>
int main()
{
    for (int i = 1; i < 18; i++)
    {

        for (int k,j=k= 1; j <=17,k<=17; j++,k++)
        {
            
            // printf("  ");
            if ( j ==(10-i)||k==(8+i)|| (j == (i-8) && i>9)||(k==(26-i) && i>9))
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