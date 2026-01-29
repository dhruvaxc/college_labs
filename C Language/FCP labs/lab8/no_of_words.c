#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int l1, n = 0, b = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    l1 = strcspn(str, "\n");
    for (int i = 0; i < l1; i++)
    {
        if (str[i] == ' ')
        {
            b = 0;
        }
        else if (b == 0)
        {
            n++;
            b = 1;
        }
    }
    printf("Number of words in the given sentence is: %d\n", n);
    return 0;
}