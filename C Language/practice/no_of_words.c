#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100];
    printf("Enter a string: ");
    char *Ptr=strtok(fgets(str, sizeof(str), stdin), " ");
    int c=0;
    while (Ptr != NULL) 
    {
        Ptr = strtok(NULL, " ");
        c++;
    }
    printf("Number of words in the given string: %d\n", c);
    return 0;
}