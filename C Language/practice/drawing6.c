#include <stdio.h>
int main()
{
    for (int i = 1; i < 13; i++)
    {

        for (int m,l,k,j=k=l=m=1; j <=17 ,k<=17,m<=17,l<=17; j++,k++,m++,l++)
        {
            if ( j ==(10-i)||k==(8+i)||(i>=4 && m==(i-3))||(i>=4 && l==(21-i)))
                {
                    printf(" *");
                }
                else if (i == 9||i==4)
                {
                    printf(" *");
                }
                else
                {
                    printf("  ");
                }
            
        }
        printf("\n");
    }
    return 0;
}