#include<stdio.h>
#include<string.h>
#include <ctype.h>
struct item 
{
    char item_name[40];
    int quantity;
    float price;
    float amount;
};
typedef struct item item;
int main()
 {
    int n;
    float a=0;
    printf("Enter number of items: ");
    scanf("%d", &n);
    getchar(); 
    item i1[n];
    for (int i = 0; i < n; i++) 
    {   
        printf("\nItem %d:\n", i + 1);
        printf("Enter item name: ");
        fgets(i1[i].item_name, sizeof(i1[i].item_name), stdin);
        printf("Enter quantity: ");
        scanf("%d", &i1[i].quantity);
        printf("Enter price: ");
        scanf("%f", &i1[i].price);
        getchar(); 
        i1[i].amount = i1[i].quantity * i1[i].price;
        a += i1[i].amount;
    }
    for (int i=0; i<n; i++)
    {
        printf("\nItem %d: %s", i + 1, i1[i].item_name);
        printf("Quantity: %d", i1[i].quantity);
        printf("Price: %.2f", i1[i].price);
        printf("Amount: %.2f\n", i1[i].amount);
    }
    printf("\nTotal Amount: %.2f\n", a);
    return 0;
}