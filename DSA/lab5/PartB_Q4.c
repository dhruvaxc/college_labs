// Q4) Reverse a Circular Linked List
// Input: 1 → 2 → 3 → 4 → (back to 1)
// Output: Reversed Circular Linked List: 4 → 3 → 2 → 1 → (back to 4)
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
Node* reverseCircular(Node* head)
{
    if (!head || head->next == head) return head;
    Node* prev = head;
    Node* curr = head->next;
    while (curr != head)
    {
        Node* nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
    head->next = prev;
    return prev;
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
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    Node* head = createCircular(arr, n);
    head = reverseCircular(head);
    printf("Reversed Circular Linked List: ");
    printCircular(head);
    return 0;
}
