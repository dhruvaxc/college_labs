#include <stdio.h>
#include <string.h>
int length(char *v);
int main()
{
    char w[200];
    printf("enter any line you want:-");
    fgets(w, sizeof(w), stdin);
    length(w);
    return 0;
}
int length(char *v)
{
    int l;
    l=strcspn(v ,"\n");
    printf("the length of the string is %d" ,l);
    return 0;
}