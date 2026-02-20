// Q2) Check Whether a Circular Linked List is Sorted
// Input: 1 → 3 → 5 → 7 → (back to 1)
// Output: The circular linked list is SORTED.
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
int isSorted(Node* head)
{
    if (!head || head->next == head) return 1;
    Node* p = head;
    do
    {
        if (p->data > p->next->data) return 0;
        p = p->next;
    } while (p != head);
    return 1;
}
int main()
{
    int arr[] = {1, 3, 5, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    Node* head = createCircular(arr, n);
    if (isSorted(head))
        printf("The circular linked list is SORTED.\n");
    else
        printf("The circular linked list is NOT sorted.\n");
    return 0;
}
