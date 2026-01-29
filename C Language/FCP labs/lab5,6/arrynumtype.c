#include <stdio.h>
int main() 
{
    int b=10,p=0,n=0,z=0;
    int a[10];
    printf("Enter the elements:\n");
    for(int i = 0; i < 10; i++) 
    {
        scanf("%d", &a[i]);
       if(a[i]>0)
       {
        p++;
       }
       else if(a[i]<0)
       {
        n++;
       }
       else
       {
        z++;
       }
    }
    printf("the number os positive and negetive and zero elements are %d %d %d",p,n,z);
    return 0;
}