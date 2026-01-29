#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int l1, l2 = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    l1 = strcspn(str, "\n");
    for (int i = 0; i < l1; i++)
    {
        if (str[i] != ' ')
        {
            l2++;
        };
    }
    printf("Length of the string including spaces: %d\n", l1);
    printf("Length of the string excluding spaces: %d\n", l2);
    return 0;
}