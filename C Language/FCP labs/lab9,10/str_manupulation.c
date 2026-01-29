#include <stdio.h>

void copyString(char src[], char dest[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

int compareString(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i])
            return str1[i] - str2[i];
        i++;
    }
    return str1[i] - str2[i];
}

void concatString(char str1[], char str2[], char result[]) {
    int i = 0, j = 0;
    while (str1[i] != '\0') {
        result[i] = str1[i];
        i++;
    }
    while (str2[j] != '\0') {
        result[i] = str2[j];
        i++;
        j++;
    }
    result[i] = '\0';
}

void reverseString(char str[], char rev[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    for (int i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];
    }
    rev[len] = '\0';
}

int main() {
    char str1[100], str2[100], result[200], rev[100], copy[100];
    int choice;

    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    printf("\nChoose operation:\n");
    printf("1. Copy string\n");
    printf("2. Compare strings\n");
    printf("3. Concatenate strings\n");
    printf("4. Reverse string\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            copyString(str1, copy);
            printf("Copied string: %s\n", copy);
            break;
        case 2:
            if (compareString(str1, str2) == 0)
                printf("Strings are equal\n");
            else
                printf("Strings are not equal\n");
            break;
        case 3:
            concatString(str1, str2, result);
            printf("Concatenated string: %s\n", result);
            break;
        case 4:
            reverseString(str1, rev);
            printf("Reversed string: %s\n", rev);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}