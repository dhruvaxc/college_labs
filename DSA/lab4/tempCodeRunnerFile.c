// Detect a loop in a singly linked list
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

int detectLoop(struct Node* head)
{
    struct Node* slow = head;
    struct Node* fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int n, value, choice;
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
    printf("Do you want to create a loop? (1 for Yes, 0 for No): ");
    scanf("%d", &choice);
    if (choice == 1 && head != NULL && head->next != NULL)
    {
        temp->next = head->next;
    }
    if (detectLoop(head))
    {
        printf("Loop detected in the linked list\n");
    }
    else
    {
        printf("No loop in the linked list\n");
    }
    return 0;
}