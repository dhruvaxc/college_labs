/*25. PROGRAM TO PRINT TABLE OF ANY NO.*/
#include <stdio.h>
int main()
{
    int a,b,f;
    f = 1;
    printf("enter the number:-");
    scanf("%d", &a);
    printf("enter the positive number till were you want the table to:-");
    scanf("%d", &b);
        for (int i = 1; b> 0; --b)
        {
            f=a*i;
            i++;
            printf("%d\n", f);
        }
    return 0;
}