#include <stdio.h>
#include <string.h>
#include <ctype.h>
struct String
{
    char s[100];
    int index;
};
typedef struct String string;
string removeSpaces(string c);
void assignindex(string c[],string d[],int n);
int main()
{
    int n, l;
    printf("How many strings do you want to compare : ");
    scanf("%d", &n);
    getchar();
    string a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter string %d\n: ", i + 1);
        fgets(a[i].s, sizeof(a[i].s), stdin);
        l = strcspn(a[i].s, "\n");
        a[i].s[l] = '\0';
    }
    for(int i=0;i<n;i++)
    {   l = strlen(a[i].s);
        b[i]=a[i];
        for (int j = 0; j < l; j++)
        {
            b[i].s[j] = tolower(b[i].s[j]);
        }
        b[i] = removeSpaces(b[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(b[i].s, b[j].s) > 0)
            {
                string temp = b[i];
                b[i] = b[j];
                b[j] = temp;

                temp = a[i];
                a[i] = a[j];
                a[j] = temp;

            }
        }
    }
    assignindex(a,b,n);
    printf("The sorted strings are :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d%c %s \n", a[i].index,']', a[i].s);
    }
    return 0;
}
string removeSpaces(string c)
{
    int i, j;
    i = j = 0;
    while (c.s[i] != '\0')
    {
        if (c.s[i] != ' ')
            c.s[j++] = c.s[i];
        i++;
    }
    c.s[j] = '\0';
    return c;
}
void assignindex(string c[],string d[], int n)
{
    int in=1;
    c->index=in;
    for(int i=0; i<(n-1); i++)
    {
        if(strcmp(d[i].s,d[i+1].s)==0)
        {
            c[i+1].index=d[i+1].index=in;
        }
        else
        {
            in++;
            c[i+1].index=d[i+1].index=in;
        }
    }
}