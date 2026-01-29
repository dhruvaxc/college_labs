#include <stdio.h>
int vowel(char v);
int main()
{
    char w;
    printf("enter any alphabet:-");
    scanf("%c", &w);
    vowel(w);
    return 0;
}
int vowel(char v)
{
    if (v == 'a' || v == 'e' || v == 'i' || v == 'o' || v == 'u'||v == 'A' || v == 'E' || v == 'I' || v == 'O' || v == 'U')
        printf("The given alphabet is a vowel");
    else
        printf("The given alphabet is a consonant");
    return 0;
}