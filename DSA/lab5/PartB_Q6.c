// Q6) Convert Circular Linked List to Linear Linked List
// Input: 10 → 20 → 30 → (back to 10)
// Output: Linear list: 10 → 20 → 30 → NULL
#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node* next;
} Node;
Node* createCircular(int arr[], int n)
{
    Node* head = NULL;
    Node* tail = NULL;
    for (int i = 0; i < n; i++)
    {
        Node* newNode = (Node*)malloc(sizeof(Node));
        newNode->data = arr[i];
        newNode->next = NULL;
        if (!head)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    if (tail) tail->next = head;
    return head;
}
Node* toLinear(Node* head)
{
    if (!head) return NULL;
    Node* p = head;
    while (p->next != head) p = p->next;
    p->next = NULL;
    return head;
}
void printList(Node* head)
{
    while (head)
    {
        printf("%d", head->data);
        if (head->next) printf(" → ");
        head = head->next;
    }
    printf(" → NULL\n");
}
int main()
{
    int arr[] = {10, 20, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    Node* head = createCircular(arr, n);
    head = toLinear(head);
    printf("Linear list: ");
    printList(head);
    return 0;
}
