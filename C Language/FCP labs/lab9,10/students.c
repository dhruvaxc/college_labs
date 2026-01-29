#include <stdio.h>
#include <stdlib.h>
struct Student {
    int roll;
    char name[50];
    int marks;
};
int main() 
{
    FILE *fp;
    struct Student s;
    int n, i;
    fp = fopen("LNMIITSTUDENT.java", "w");
    if (fp == NULL) 
    {
        printf("Cannot open file\n");
        return 1;
    }
    printf("Enter number of students: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) 
    {
        printf("Enter roll number: ");
        scanf("%d", &s.roll);
        printf("Enter name: ");
        scanf("%s", s.name);
        printf("Enter total marks: ");
        scanf("%d", &s.marks);
        fprintf(fp, "%d %s %d\n", s.roll, s.name, s.marks);
    }
    fclose(fp);
    printf("Student details stored in LNMIITSTUDENT.java\n");
    return 0;
}