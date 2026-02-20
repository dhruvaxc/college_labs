// Q7) Find Last Remaining Node After Repeated Deletions
// Input: List: 1 → 2 → 3 → 4 → 5 → (back to 1), k = 3
// Output: Last remaining node: 4
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
Node* lastRemaining(Node* head, int k)
{
    if (!head || head->next == head) return head;
    Node* curr = head;
    while (curr->next != curr)
    {
        for (int i = 1; i < k - 1; i++) curr = curr->next;
        Node* toDel = curr->next;
        curr->next = toDel->next;
        free(toDel);
        curr = curr->next;
    }
    return curr;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    Node* head = createCircular(arr, n);
    head = lastRemaining(head, 3);
    printf("Last remaining node: %d\n", head->data);
    return 0;
}
