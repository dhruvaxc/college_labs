#include <stdio.h>
int main() 
{
    int o=0,e=0;
    int a[10];
    printf("Enter the elements:\n");
    for(int i = 0; i < 10; i++) 
    {
        scanf("%d", &a[i]);
       if(a[i]%2==0)
       {
        e++;
       }
       else
       {
        o++;
       }
    }
    printf("the number of odd and even elements are %d and %d\n",o,e);
    return 0;
}