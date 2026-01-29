#include<stdio.h>
#include<string.h>
struct String {
    char s[100];
};
typedef struct String string;
int main() {
    int n, l;
    printf("How many strings do you want to covert to lowercase : ");
    scanf("%d", &n);
    getchar(); 
    string a[n],b[n];
    for(int i = 0; i < n; i++) {
        printf("Enter string %d: ", i + 1);
        fgets(a[i].s, sizeof(a[i].s), stdin);
    }
    for(int i = 0; i < n; i++) {
        strcpy(b[i].s, a[i].s);
    }
    for (int i=0 ; i<n ; i++)
    {
        l=strcspn(b[i].s, "\n");
        for (int j=0 ; j<l ; j++)
        {
            b[i].s[j]=(int)b[i].s[j];
            if (b[i].s[j]>=65 && b[i].s[j]<=90)
            {
                b[i].s[j]=b[i].s[j]+32;
                b[i].s[j]=(char)b[i].s[j];
            }
            else
            {
                b[i].s[j]=(char)b[i].s[j];
            }
        }
    }
for(int i = 0; i < n; i++) 
{
    printf("the string %d in lowercase is: %s", i + 1, b[i].s);
}
    return 0;
}