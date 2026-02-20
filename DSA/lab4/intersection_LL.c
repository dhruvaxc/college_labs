// Find the intersection point of two singly linked lists
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node* newNode(int data)
{
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}

struct Node* getIntersection(struct Node* head1, struct Node* head2)
{
    struct Node* a = head1;
    struct Node* b = head2;
    while (a != b)
    {
        a = (a == NULL) ? head2 : a->next;
        b = (b == NULL) ? head1 : b->next;
    }
    return a;
}

void printList(struct Node* head)
{
    struct Node* temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    struct Node* head1 = newNode(1);
    head1->next = newNode(2);
    head1->next->next = newNode(3);
    struct Node* common = newNode(6);
    head1->next->next->next = common;
    common->next = newNode(7);
    struct Node* head2 = newNode(4);
    head2->next = newNode(5);
    head2->next->next = common;
    struct Node* intersection = getIntersection(head1, head2);
    if (intersection != NULL)
    {
        printf("Intersection point data: %d\n", intersection->data);
    }
    else
    {
        printf("No intersection point found\n");
    }
    return 0;
}