#include <stdio.h>
enum Color { RED, GREEN, BLUE, YELLOW, BLACK, WHITE };
int main() {
    enum Color c;
    int choice;
    printf("Choose a color:\n");
    printf("0 - RED\n1 - GREEN\n2 - BLUE\n3 - YELLOW\n4 - BLACK\n5 - WHITE\n");
    scanf("%d", &choice);
    c = choice;
    switch (c) {
        case RED:
            printf("Hex code: #FF0000\n");
            break;
        case GREEN:
            printf("Hex code: #00FF00\n");
            break;
        case BLUE:
            printf("Hex code: #0000FF\n");
            break;
        case YELLOW:
            printf("Hex code: #FFFF00\n");
            break;
        case BLACK:
            printf("Hex code: #000000\n");
            break;
        case WHITE:
            printf("Hex code: #FFFFFF\n");
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}