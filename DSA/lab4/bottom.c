// Flatten a linked list having next and bottom pointers into a single sorted list
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
    struct Node* bottom;
};

struct Node* newNode(int data)
{
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    node->bottom = NULL;
    return node;
}

struct Node* merge(struct Node* a, struct Node* b)
{
    if (a == NULL)
    {
        return b;
    }
    if (b == NULL)
    {
        return a;
    }
    struct Node* result;
    if (a->data < b->data)
    {
        result = a;
        result->bottom = merge(a->bottom, b);
    }
    else
    {
        result = b;
        result->bottom = merge(a, b->bottom);
    }
    result->next = NULL;
    return result;
}

struct Node* flatten(struct Node* root)
{
    if (root == NULL || root->next == NULL)
    {
        return root;
    }
    root->next = flatten(root->next);
    root = merge(root, root->next);
    return root;
}

void printList(struct Node* head)
{
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->bottom;
    }
    printf("\n");
}

int main()
{
    struct Node* head = newNode(5);
    head->bottom = newNode(7);
    head->bottom->bottom = newNode(8);
    head->bottom->bottom->bottom = newNode(30);
    head->next = newNode(10);
    head->next->bottom = newNode(20);
    head->next->next = newNode(19);
    head->next->next->bottom = newNode(22);
    head->next->next->bottom->bottom = newNode(50);
    head->next->next->next = newNode(28);
    head->next->next->next->bottom = newNode(35);
    head->next->next->next->bottom->bottom = newNode(40);
    head->next->next->next->bottom->bottom->bottom = newNode(45);
    head = flatten(head);
    printf("Flattened list: ");
    printList(head);
    return 0;
}