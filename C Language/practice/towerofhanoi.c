#include <stdio.h>
#include <math.h>
#include <string.h>
int c=0;
int towerOfHanoi(int n, char s[100], char d[100], char a[100]) {
    if (n == 1) {
        printf("Move disk 1 from Rod %s to Rod %s\n", s, d);
        c++;
        return 0;
    }
    towerOfHanoi(n - 1, s, a, d);
    printf("Move disk %d from Rod %s to Rod %s\n", n, s, d);
    c++;
    towerOfHanoi(n - 1, a, d, s);
    return 0;
}
int main() {
    int n;
    char s[100], d[100], a[100];
    printf("Enter number of disks: ");
    scanf("%d", &n);
    getchar(); 
    printf("Enter the names of source, destination and auxiliary rods:\n");
    fgets(s, sizeof(s), stdin);
    fgets(d, sizeof(d), stdin);
    fgets(a, sizeof(a), stdin);
    s[strcspn(s, "\n")] = '\0';
    d[strcspn(d, "\n")] = '\0';
    a[strcspn(a, "\n")] = '\0';
    printf("The sequence of moves are:\n [note that the size of disk is proportional to the number]\n");
    towerOfHanoi(n, s, d, a);
    int moves = pow(2, n) - 1;
    printf("Total number of moves according to formula : %d\n", moves);
    printf("Total number of moves performed by program : %d\n", c);
    return 0;
}