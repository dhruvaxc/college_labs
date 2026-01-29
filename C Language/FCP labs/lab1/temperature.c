#include <stdio.h>
int main()
{
    int a;
    float b;
    printf("enter temperature in farenheit:-");
    scanf("%d",&a);
    b = (float)(a-32)*5/9;
    printf("The temperature in centigrade is= %f",b);
    return 0;
}