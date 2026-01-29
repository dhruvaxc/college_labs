#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct composition
{
    char gem[10];
};
typedef struct composition gemstone;
void sort (char *c, int l);
gemstone removecommon(gemstone c);
int compare(const void *a, const void *b);
int main()
{
    int n,l;
    printf("Enter the number of gemstones: ");
    scanf("%d", &n);
    gemstone gems[n];
    char tgem[n*10];
    tgem[0]='\0';
    for(int i=0;i<n;i++)
    {
        printf("Enter the composition of gemstone %d: ",i+1);
        scanf("%s",gems[i].gem);
        l=strlen(gems[i].gem);
        sort(gems[i].gem,l);
        gems[i]=removecommon(gems[i]);
        strcat(tgem,gems[i].gem);
    }
    sort(tgem,strlen(tgem));
    gemstone gemele;
    l=strlen(tgem);
    int i = 0,c=1, k=0;
    while (i < l) {
        if (tgem[i] == tgem[i+1]) {
            c++;
            if (c == n)
            gemele.gem[k++]=tgem[i];
        }
        else
        {
            c=1;
        }
        i++;
    }
    gemele.gem[k]='\0';
    gemele=removecommon(gemele);
    if (strlen(gemele.gem)==0)
        printf("No common elements in all gemstones\n");
    else
        printf("The common elements in all gemstones are: %s\n",gemele.gem);
}
int compare(const void *a, const void *b)
{
    return (*(const char *)a - *(const char *)b);
}
void sort (char *c, int l)
{
    qsort(c,l,sizeof(char),compare);
}
gemstone removecommon(gemstone c) {
    int i = 0, j = 0;
    while (c.gem[i] != '\0') {
        if (c.gem[i] != c.gem[i + 1]) {
            c.gem[j++] = c.gem[i];
        }
        i++;
    }
    c.gem[j] = '\0';
    return c;
}