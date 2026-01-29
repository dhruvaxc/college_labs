#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    float f;
    printf("enter marks obtained in 5 subjects in the exam :- ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    f= (float)(a+b+c+d+e)/5;
    printf("Average marks obtained in the exam is = %f",f);
    if(f>90)
    {
        printf(" you have passed the exam with A grade ");   
    }
    else if(f>80)
    {
        printf("you have passed the exam with B grade ");   
    }
    else if(f>70)
    {
        printf(" you have passed the exam with C grade ");   
    }
    else if(f>60)
    {
        printf("you have passed the exam with D grade ");   
    }
    else
    {
        printf("you have failed the exam");   
    }
    return 0;
}