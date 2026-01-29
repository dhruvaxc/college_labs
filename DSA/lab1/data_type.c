#include <stdio.h>
#include <string.h>
struct Student 
{
    int id;
    char name[20];
};
int main() 
{
    int a = 10;
    float b = 3.14;
    char c = 'X';
    double d = 25.6789;
    int arr[5] = {1, 2, 3, 4, 5};
    struct Student s1;
    s1.id = 101;
    strcpy(s1.name, "Dhruva");
    printf("Primitive Data Types:\n");
    printf("int a = %d, address = %p, size = %zu\n", a, (void*)&a, sizeof(a));
    printf("float b = %.2f, address = %p, size = %zu\n", b, (void*)&b, sizeof(b));
    printf("char c = %c, address = %p, size = %zu\n", c, (void*)&c, sizeof(c));
    printf("double d = %.4f, address = %p, size = %zu\n", d, (void*)&d, sizeof(d));
    printf("\nNon-Primitive Data Types:\n");
    printf("Array arr[5] = {1,2,3,4,5}, address = %p, size = %zu\n", (void*)arr, sizeof(arr));
    for (int i = 0; i < 5; i++) 
    {
        printf("arr[%d] = %d, address = %p, size = %zu\n", i, arr[i], (void*)&arr[i], sizeof(arr[i]));
    }
    printf("\nStructure Student:\n");
    printf("s1.id = %d, address = %p, size = %zu\n", s1.id, (void*)&s1.id, sizeof(s1.id));
    printf("s1.name = %s, address = %p, size = %zu\n", s1.name, (void*)s1.name, sizeof(s1.name));
    printf("Total size of struct Student = %zu\n", sizeof(s1));
    return 0;
}