#include <stdio.h>
#include <math.h>

int flip(int num, int n) {
    int power = (int)pow(10, n);
    int prefix = num / power;
    int suffix = num % power;
    int rev = 0;

    while (suffix > 0) {
        rev = rev * 10 + (suffix % 10);
        suffix /= 10;
    }

    return prefix * power + rev;
}

int main() {
    int num, n;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Enter n (digits to flip): ");
    scanf("%d", &n);

    int result = flip(num, n);
    printf("Result after flipping last %d digits: %d\n", n, result);

    return 0;
}