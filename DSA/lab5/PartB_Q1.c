// Q1) Split a Circular Linked List into Two Equal Halves
// Input: 10 → 20 → 30 → 40 → 50 → 60 → (back to 10)
// Output: First Half: 10 → 20 → 30 → (back to 10) Second Half: 40 → 50 → 60 → (back to 40)
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
void splitCircular(Node* head, Node** half1, Node** half2)
{
    if (!head || !head->next) { *half1 = head; *half2 = NULL; return; }
    Node* slow = head;
    Node* fast = head;
    while (fast->next != head && fast->next->next != head)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    if (fast->next->next == head) fast = fast->next;
    *half1 = head;
    *half2 = slow->next;
    fast->next = slow->next;
    slow->next = head;
}
void printCircular(Node* head, int count)
{
    Node* p = head;
    for (int i = 0; i < count && p; i++)
    {
        printf("%d", p->data);
        if (i < count - 1) printf(" → ");
        p = p->next;
    }
    if (head) printf(" → (back to %d)\n", head->data);
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    Node* head = createCircular(arr, n);
    Node* half1, *half2;
    splitCircular(head, &half1, &half2);
    printf("First Half: ");
    printCircular(half1, 3);
    printf("Second Half: ");
    printCircular(half2, 3);
    return 0;
}
