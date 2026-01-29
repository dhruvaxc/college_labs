#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    char *c=str;
    int l1=0, l2 = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while (*c != '\0') 
    {
        l1++;  
            if (*c != ' ')
                l2++;
        c++;
    }
    printf("Length of the string including spaces: %d\n", l1);
    printf("Length of the string excluding spaces: %d\n", l2);
    return 0;
}