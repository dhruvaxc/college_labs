#include <stdio.h>
#include <string.h>
int main() 
{
    int n, i, j;
    char str[50][100], temp[100];
    char *p[50];
    printf("Enter number of strings: ");
    scanf("%d", &n);
    getchar();
    for(i = 0; i < n; i++) 
    {
        printf("Enter string %d: ", i+1);
        fgets(str[i], sizeof(str[i]), stdin);
        str[i][strcspn(str[i], "\n")] = '\0';
        p[i] = str[i];
    }
    for(i = 0; i < n-1; i++) 
    {
        for(j = i+1; j < n; j++) 
        {
            if(strcmp(p[i], p[j]) > 0) 
            {
                strcpy(temp, p[i]);
                strcpy(p[i], p[j]);
                strcpy(p[j], temp);
            }
        }
    }
    printf("\nStrings in ascending order:\n");
    for(i = 0; i < n; i++) {
        printf("%s\n", p[i]);
    }
    return 0;
}