#include <stdio.h>
int main()
{
    int n,a,c=0;
    printf("Enter number of elements\n");
    scanf("%d", &n);
    int b[n];
    printf("Enter %d integers\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    printf("enter the number of which the occurence you want to know:-");
    scanf("%d" ,&a);
    for (int i = 0; i < n; i++)
    {
      if(b[i]==a)
        {
           c++; 
        }
    }
    printf("the occurence of %d in the array is %d", a,c);
    return 0;
}