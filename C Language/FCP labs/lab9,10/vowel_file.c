#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char ch;
    int count = 0;
    fp = fopen("story.txt", "r");
    if (fp == NULL) 
    {
        printf("Cannot open file\n");
        return 1;
    }
    while ((ch = fgetc(fp)) != EOF) 
    {
        char *p = &ch;
        if (*p=='a' || *p=='e' || *p=='i' || *p=='o' || *p=='u' ||
            *p=='A' || *p=='E' || *p=='I' || *p=='O' || *p=='U') 
        {
            count++;
        }
    }
    fclose(fp);
    printf("Number of vowels in file: %d\n", count);
    return 0;
}