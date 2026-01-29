#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100], rev[100];
    char *p, *q;
    int len, i;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    len = strlen(str);
    if(str[len - 1] == '\n') 
    {
        str[len - 1] = '\0';
        len--;
    }
    p = str;
    q = rev;
    for(i = 0; i < len; i++) 
    {
        *(q + i) = *(p + (len - 1 - i));
    }
    *(q + len) = '\0';
    printf("Reversed string: %s\n", rev);
    return 0;
}