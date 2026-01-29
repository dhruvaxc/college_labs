#include <stdio.h>
struct Book
{
    char title[100];
    char author[100];
    int pages;
    float price;
};
void read(struct Book *b);
void display(struct Book *b);
int main()
{
    struct Book b1;
    read(&b1);
    getchar();
    display(&b1);
    return 0;
}
void read(struct Book *b)
{
    printf("Enter book title: ");
    fgets(b->title, sizeof(b->title), stdin);
    printf("Enter author name: ");
    fgets(b->author, sizeof(b->author), stdin);
    printf("Enter number of pages: ");
    scanf("%d", &b->pages);
    printf("Enter price: ");
    scanf("%f", &b->price);
}
void display(struct Book *b)
{
    printf("\n--- Book Information ---\n");
    printf("Title: %s", b->title);
    printf("Author: %s", b->author);
    printf("Pages: %d\n", b->pages);
    printf("Price: ₹%.2f\n", b->price);
}