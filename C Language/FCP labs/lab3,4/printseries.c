#include <stdio.h>
int main()
{
    int a,f;
    char p='!';
    f = 1;
    printf("enter the number:-");
    scanf("%d", &a);
    printf("The required series is:\n"); 
    for(int m=1;m<=a;++m)
    {
        for(int i=m;i>0;--i)
        { 
            f=f*i; 
        }
        printf("%d/%d or %d/(%d%c) \n", m,f,m,m,p);
        f=1;
    }
    return 0;
}