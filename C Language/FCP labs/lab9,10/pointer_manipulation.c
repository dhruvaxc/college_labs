#include <stdio.h>

int main() {
    int num;
    int *ptr;

    printf("Enter a number: ");
    scanf("%d", &num);

    ptr = &num;
    *ptr = *ptr + 10;

    printf("Modified value of num: %d\n", num);
    return 0;
}