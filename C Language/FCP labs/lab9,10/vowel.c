#include <stdio.h>
#include <string.h>
int main() 
{
    char str[200];
    char *p;
    int count = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    p = str;
    while(*p != '\0')
    {
        if(*p=='a' || *p=='e' || *p=='i' || *p=='o' || *p=='u' ||
           *p=='A' || *p=='E' || *p=='I' || *p=='O' || *p=='U') 
        {
            count++;
        }
        p++;
    }
    printf("Number of vowels: %d\n", count);
    return 0;
}