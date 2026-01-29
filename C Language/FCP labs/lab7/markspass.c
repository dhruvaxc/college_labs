#include <stdio.h>
struct student
{
    char n[100];
    int r;
    int m;
};
int read(struct student s[]);
int display(struct student s[]);
int main()
{
    struct student b[10];
    read(b);
    getchar();
    display(b);
    return 0;
}
int read(struct student s[])
{
    for(int i=0;i<10;i++)
    {
    printf("Enter the name of the student: ");
    getchar();
    fgets(s[i].n, sizeof(s[i].n), stdin);
    printf("Enter rollno of the student: ");
    scanf("%d", &s[i].r);
    printf("Enter total marks: ");
    scanf("%d", &s[i].m);
    }
    return 0;
}
int display(struct student s[])
{
     printf("\n===== Students with Marks > 500 =====\n");
    for (int i = 0; i <10; i++) {
        if (s[i].m > 500) {
            printf("\nName: %s", s[i].n);
            printf("Roll: %d\n", s[i].r);
            printf("Marks: %d\n", s[i].m);
        }
    }
    return 0;
}