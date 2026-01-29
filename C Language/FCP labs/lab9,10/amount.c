#include <stdio.h>

struct Item {
    char item_name[50];
    int quantity;
    float price;
    float amount;
};

void readItem(struct Item *it) {
    printf("Enter item name: ");
    scanf("%s", it->item_name);

    printf("Enter quantity: ");
    scanf("%d", &it->quantity);

    printf("Enter price: ");
    scanf("%f", &it->price);

    it->amount = it->quantity * it->price;

    printf("\nItem Details:\n");
    printf("Name: %s\n", it->item_name);
    printf("Quantity: %d\n", it->quantity);
    printf("Price: %.2f\n", it->price);
    printf("Amount: %.2f\n", it->amount);
}

int main() {
    struct Item item;
    readItem(&item);
    return 0;
}