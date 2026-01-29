#include <stdio.h>
#define BIGGEST(a,b) ((a) > (b) ? (a) : (b))
int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("Biggest number: %d\n", BIGGEST(x, y));
    return 0;
}