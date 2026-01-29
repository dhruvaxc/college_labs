#include <stdio.h>

void printJewishStar(int size) {
    int i, j;

    for (i = 0; i < size * 2; i++) {
        for (j = 0; j < size * 2; j++) {
            // Conditions to draw the two overlapping triangles
            if (
                (i == j && i < size) ||                             // Diagonal of top triangle
                (i + j == size * 2 - 1 && i < size) ||              // Other diagonal of top triangle
                (i == size - 1) ||                                  // Base of top triangle
                (i == j && i >= size) ||                            // Diagonal of bottom triangle
                (i + j == size * 2 - 1 && i >= size) ||             // Other diagonal of bottom triangle
                (i == size)                                         // Base of bottom triangle
            ) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

int main() {
    int size;
    printf("Enter size (recommended: 5 to 10): ");
    scanf("%d", &size);

    printJewishStar(size);
    return 0;
}
