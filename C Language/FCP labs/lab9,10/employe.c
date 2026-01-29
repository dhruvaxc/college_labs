#include <stdio.h>
struct Employee 
{
    int emp_no;
    char name[50];
    float basic_pay;
};
int main() 
{
    struct Employee employ[50];
    struct Employee *ptr;
    int n, i;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    ptr = employ;
    for(i = 0; i < n; i++) 
    {
        printf("Enter employee number: ");
        scanf("%d", &(ptr+i)->emp_no);
        printf("Enter employee name: ");
        scanf("%s", (ptr+i)->name);
        printf("Enter basic pay: ");
        scanf("%f", &(ptr+i)->basic_pay);
    }
    printf("\nEmployee Details:\n");
    for(i = 0; i < n; i++) 
    {
        printf("Emp No: %d, Name: %s, Basic Pay: %.2f\n",
               (ptr+i)->emp_no, (ptr+i)->name, (ptr+i)->basic_pay);
    }
    return 0;
}