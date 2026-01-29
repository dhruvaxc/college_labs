#include <stdio.h>
#include <string.h>
#include <ctype.h>
struct String
{
    char s[100];
};
typedef struct String string;
string removeSpaces(string c);
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
        strcpy(b[i].s, a[i].s);
        l = strcspn(b[i].s, "\n");
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
                char t[100];
                strcpy(t, b[i].s);
                strcpy(b[i].s, b[j].s);
                strcpy(b[j].s, t);
                strcpy(t, a[i].s);
                strcpy(a[i].s, a[j].s);
                strcpy(a[j].s, t);
            }
        }
    }
    printf("The sorted strings are :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s", a[i].s);
    }
    return 0;
}
string removeSpaces(string c)
{
    int i, j;
    int l = strcspn(c.s, "\n");
    i = j = 0;
    while (c.s[i] != '\0' && i < l)
    {
        if (c.s[i] != ' ')
        {
            c.s[j] = c.s[i];
            j++;
        }
        i++;
    }
    c.s[j] = '\0';
    return c;
}