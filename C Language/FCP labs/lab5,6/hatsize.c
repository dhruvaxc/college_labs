#include <stdio.h>
#include <stdbool.h>
int main()
{
    float h[2][11] = 
        {
            {20.5,20.875,21.25,21.625,21.75,22.375,22.75,23.125,23.875,24.25,24.625},
            {6.5,6.625,6.75,7.000,7.125,7.25,7.375,7.50,7.625,7.75,7.875}
        };
    float c,s;
    bool b = false;
    printf("Enter the head circumference in inches: "); 
    scanf("%f", &c);
    for(int i = 0; i < 11; i++) 
    {
        if(c <= h[0][i+1] && c>= h[0][i]) 
        {
           s = h[1][i];
            b = true;
            break;
        }
    }
    if(b==true)
    {
        printf("The corresponding hat size is %.3f\n", s);
    } 
    else 
    {
        printf("No hat size found for the given head circumference.\n");
    }
    return 0;
}