// Q3) Insert a Node into a Sorted Circular Linked List
// Input: Insert 6 into: 1 → 3 → 5 → 7 → (back to 1)
// Output: After insertion: 1 → 3 → 5 → 6 → 7 → (back to 1)
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
Node* insertSorted(Node* head, int val)
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = val;
    if (!head)
    {
        newNode->next = newNode;
        return newNode;
    }
    Node* p = head;
    if (val <= head->data)
    {
        while (p->next != head) p = p->next;
        p->next = newNode;
        newNode->next = head;
        return newNode;
    }
    while (p->next != head && p->next->data < val) p = p->next;
    newNode->next = p->next;
    p->next = newNode;
    return head;
}
void printCircular(Node* head)
{
    if (!head) return;
    Node* p = head;
    do
    {
        printf("%d", p->data);
        printf(" → ");
        p = p->next;
    } while (p != head);
    printf("(back to %d)\n", head->data);
}
int main()
{
    int arr[] = {1, 3, 5, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    Node* head = createCircular(arr, n);
    head = insertSorted(head, 6);
    printf("After insertion: ");
    printCircular(head);
    return 0;
}
