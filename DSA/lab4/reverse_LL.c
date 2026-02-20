// Reverse a singly linked list in groups of size k
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

struct Node* reverseInGroups(struct Node* head, int k)
{
    struct Node* current = head;
    struct Node* prev = NULL;
    struct Node* next = NULL;
    int count = 0;
    while (current != NULL && count < k)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }
    if (next != NULL)
    {
        head->next = reverseInGroups(next, k);
    }
    return prev;
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
    int n, value, k;
    struct Node* head = NULL;
    struct Node* temp = NULL;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter value for node %d: ", i + 1);
        scanf("%d", &value);
        struct Node* node = newNode(value);
        if (head == NULL)
        {
            head = node;
            temp = node;
        }
        else
        {
            temp->next = node;
            temp = node;
        }
    }
    printf("Enter group size k: ");
    scanf("%d", &k);
    head = reverseInGroups(head, k);
    printf("List after reversing in groups of %d: ", k);
    printList(head);
    return 0;
}