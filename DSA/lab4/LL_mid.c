/*Find the middle element of a singly linked list. 
Example: 11 → 22 → 33 → 44 → 55 → NULL
*/
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

void findMiddle(struct Node* head)
{
    struct Node* slow = head;
    struct Node* fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    if (slow != NULL)
    {
        printf("Middle element: %d\n", slow->data);
    }
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
    findMiddle(head);
    return 0;
}