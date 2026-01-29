#include <stdio.h>
#include <string.h>
int factorial(int n);
void permute(char *str, int left, int right);
void swap(char *x, char *y);
int main()
{
    char str[10];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int p,l=strcspn(str, "\n");
    str[l]='\0';
    p=factorial(l);
    printf("Total permutations possible: %d\n", p);
    printf("Permutations of the string are:\n");
    permute(str, 0, l-1);
    return 0;
}
int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}
void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}
void permute(char *str, int left, int right) {
    if (left == right) {
        printf("%s\n", str);
    } else {
        for (int i = left; i <= right; i++) 
        {
            swap(&str[left], &str[i]);
            permute(str, left + 1, right);
            swap(&str[left], &str[i]);
        }
    }
}