#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int l1, n = 1;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    l1 = strlen(str);
    char b[l1];
    b[l1 - 1] = '\0';
    for (int i = 0, j = (l1 - 2); i < (l1 - 1) && j >= 0; i++, j--)
    {
        b[j] = str[i];
    }
    printf("The reversed string is: %s\n", b);
    return 0;
}