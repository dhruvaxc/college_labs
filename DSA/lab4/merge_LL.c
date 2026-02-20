// Merge two sorted singly linked lists into one sorted list
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

struct Node* mergeLists(struct Node* l1, struct Node* l2)
{
    if (l1 == NULL)
    {
        return l2;
    }
    if (l2 == NULL)
    {
        return l1;
    }
    struct Node* result = NULL;
    if (l1->data <= l2->data)
    {
        result = l1;
        result->next = mergeLists(l1->next, l2);
    }
    else
    {
        result = l2;
        result->next = mergeLists(l1, l2->next);
    }
    return result;
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
    int n1, n2, value;
    struct Node* head1 = NULL;
    struct Node* head2 = NULL;
    struct Node* temp = NULL;
    printf("Enter number of nodes in first list: ");
    scanf("%d", &n1);
    for (int i = 0; i < n1; i++)
    {
        printf("Enter value for node %d: ", i + 1);
        scanf("%d", &value);
        struct Node* node = newNode(value);
        if (head1 == NULL)
        {
            head1 = node;
            temp = node;
        }
        else
        {
            temp->next = node;
            temp = node;
        }
    }
    printf("Enter number of nodes in second list: ");
    scanf("%d", &n2);
    for (int i = 0; i < n2; i++)
    {
        printf("Enter value for node %d: ", i + 1);
        scanf("%d", &value);
        struct Node* node = newNode(value);
        if (head2 == NULL)
        {
            head2 = node;
            temp = node;
        }
        else
        {
            temp->next = node;
            temp = node;
        }
    }
    struct Node* merged = mergeLists(head1, head2);
    printf("Merged sorted list: ");
    printList(merged);
    return 0;
}