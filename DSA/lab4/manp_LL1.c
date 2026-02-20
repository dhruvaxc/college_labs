// Move the last node of a linked list to the front
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

void moveLastToFront(struct Node** head)
{
    if (*head == NULL || (*head)->next == NULL)
    {
        return;
    }
    struct Node* secondLast = NULL;
    struct Node* last = *head;
    while (last->next != NULL)
    {
        secondLast = last;
        last = last->next;
    }
    secondLast->next = NULL;
    last->next = *head;
    *head = last;
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
    int n, value;
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
    moveLastToFront(&head);
    printf("List after moving last node to front: ");
    printList(head);
    return 0;
}