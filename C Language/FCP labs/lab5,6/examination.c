#include <stdio.h>
int main()
{
    int a[3][10],t[10],s=0,m1,m2,m3,mt,r1,r2,r3,rt;
    r1=r2=r3=rt=0;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the marks of roll no %d:\n", i+1);
        printf("Enter marks in all 3 subjects:\n");
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[j][i]);
            s+=a[j][i];
        }
        t[i]=s;
        s=0;
    }
    printf("Total marks of all students are:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Roll no %d: %d\n", i+1, t[i]);
    }
    m1=a[0][0];
    m2=a[1][0];
    m3=a[2][0];
    mt=t[0];
    for(int i=0;i<10;i++)
    {
        
       if(m1<a[0][i])
       {
        m1=a[0][i];
        r1=i+1;
       }
       if(m2<a[1][i])
       {
        m2=a[1][i];
        r2=i+1;
       }
       if(m3<a[2][i])
       {
        m3=a[2][i];
        r3=i+1;
       }
       if(mt<t[i])
       {
        mt=t[i];
        rt=i+1;
       }
    }
    printf("student with roll no %d has the highest marks %d in subject 1\n", r1,m1);
    printf("student with roll no %d has the highest marks %d in subject 2\n", r2,m2);
    printf("student with roll no %d has the highest marks %d in subject 3\n", r3,m3);
    printf("student with roll no %d has the highest total marks %d\n", rt,mt);
    return 0;
}