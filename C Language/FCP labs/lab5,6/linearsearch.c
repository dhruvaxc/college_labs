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
    printf("Enter value to find\n");
    scanf("%d", &a);
    for (int i = 0; i < n; i++)
    {
        if (b[i] == a) 
        {
            printf("%d found at index %d\n", a, i);
            c++;
            break;
        }
    }
    if(c==0)
    {
        printf("%d not found\n", a);
    }
    return 0;
}