#include <stdio.h>
int main() {
    int num;
    int *p;
    int square, cube;
    printf("Enter a number: ");
    scanf("%d", &num);
    p = &num;
    square = (*p) * (*p);
    cube = (*p) * (*p) * (*p);
    printf("Square: %d\n", square);
    printf("Cube: %d\n", cube);
    return 0;
}