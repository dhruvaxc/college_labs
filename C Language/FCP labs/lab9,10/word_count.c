#include <stdio.h>
#include <string.h>
int main() 
{
    char str[200];
    char *p;
    int count = 0, inWord = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    p = str;
    while(*p != '\0') 
    {
        if(*p == ' ' || *p == '\n' || *p == '\t') 
        {
            inWord = 0;
        } 
        else 
        {
            if(inWord == 0) 
            {
                count++;
                inWord = 1;
            }
        }
        p++;
    }
    printf("Number of words: %d\n", count);
    return 0;
}