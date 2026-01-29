#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    float f;
    printf("enter marks of maths out of 100- ");
    scanf("%d",&a);
    printf("enter marks of physics out of 100- ");
    scanf("%d",&b);
    printf("enter marks of chemistry out of 100- ");
    scanf("%d",&c);
    printf("enter marks of english out of 100- ");
    scanf("%d",&d);
    e=a+b+c+d;
    f= (float)e/4;
    printf("\n total percentage in the exam is = %f",f);
    //for maths
    if(a>90)
    {
        printf("\n you have A grade in maths");   
    }
    else if(a>80)
    {
        printf("\n you have B grade in maths");   
    }
    else if(a>70)
    {
        printf("\n you have C grade in maths");   
    }
    else if(a>60)
    {
        printf("\n you have D grade in maths");   
    }
    else
    {
        printf("\n you have failed in maths");   
    }
    //for physics
    if(b>90)
    {
        printf("\n you have A grade in physics");   
    }
    else if(b>80)
    {
        printf("\n you have B grade in physics");   
    }
    else if(b>70)
    {
        printf("\n you have C grade in physics");   
    }
    else if(b>60)
    {
        printf("\n you have D grade in physics");   
    }
    else
    {
        printf("\n you have failed in physics");   
    }
    //for chemistry
    if(c>90)
    {
        printf("\n you have A grade in chemistry");   
    }
    else if(c>80)
    {
        printf("\n you have B grade in chemistry");   
    }
    else if(c>70)
    {
        printf("\n you have C grade in chemistry");   
    }
    else if(c>60)
    {
        printf("\n you have D grade in chemistry");   
    }
    else
    {
        printf("\n you have failed in chemistry");   
    }
    //for english
    if(d>90)
    {
        printf("\n you have A grade in english");   
    }
    else if(d>80)
    {
        printf("\n you have B grade in english");   
    }
    else if(d>70)
    {
        printf("\n you have C grade in english");   
    }
    else if(d>60)
    {
        printf("\n you have D grade in english");   
    }
    else
    {
        printf("\n you have failed in english");   
    }
    //for final result
    if(f>60)
    {
       printf("\n you have passed in the exam");  
    }
    else
    {
         printf("\n you have failed in the exam");
    }
    return 0;
}