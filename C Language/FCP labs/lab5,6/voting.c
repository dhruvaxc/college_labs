#include <stdio.h>
int main()
{
    int n,c=0,c1,c2,c3,c4,c5,cn;
    c1=c2=c3=c4=c5=cn=0;
    printf("Enter number people eligible to vote\n");
    scanf("%d", &n);
    int v[n];
    for(int i=0;i<n;i++)
    {
        printf("enter 1 to vote for candidate A\n");
        printf("enter 2 to vote for candidate B\n");
        printf("enter 3 to vote for candidate C\n");
        printf("enter 4 to vote for canditade D\n");
        printf("enter 5 to vote for canditade E\n");
        printf("enter any other number to not vote anyone\n");
        scanf("%d", &v[i]);
        if(v[i]==1)
            c1++;
        else if(v[i]==2)
            c2++;
        else if(v[i]==3)
            c3++;
        else if(v[i]==4)
            c4++;
        else if(v[i]==5)
            c5++;
        else
            cn++;
    }
    printf("Total votes for candidate A: %d\n", c1);
    printf("Total votes for candidate B: %d\n", c2);
    printf("Total votes for candidate C: %d\n", c3);
    printf("Total votes for candidate D: %d\n", c4);
    printf("Total votes for candidate E: %d\n", c5);
    printf("Total no of spoilt ballot: %d\n", cn);
    return 0;
}