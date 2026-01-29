#include <stdio.h>
#include <string.h>

enum Operation { ADD, SUB, MUL, DIV };

int main() {
    int a, b, result;
    char input[10];
    enum Operation op;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Enter operation (add, sub, mul, div): ");
    scanf("%s", input);

    if (strcmp(input, "add") == 0) op = ADD;
    else if (strcmp(input, "sub") == 0) op = SUB;
    else if (strcmp(input, "mul") == 0) op = MUL;
    else if (strcmp(input, "div") == 0) op = DIV;
    else {
        printf("Invalid operation\n");
        return 1;
    }

    switch (op) {
        case ADD: result = a + b; break;
        case SUB: result = a - b; break;
        case MUL: result = a * b; break;
        case DIV:
            if (b == 0) {
                printf("Division by zero error\n");
                return 1;
            }
            result = a / b;
            break;
    }

    printf("Result: %d\n", result);
    return 0;
}