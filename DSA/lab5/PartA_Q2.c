// Q2) Rotate the Doubly Linked List by k Nodes
// Input: List: 10 ⇄ 20 ⇄ 30 ⇄ 40 ⇄ 50 ⇄ NULL, k = 2
// Output: List after rotation: 30 ⇄ 40 ⇄ 50 ⇄ 10 ⇄ 20 ⇄ NULL
#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node* prev;
    struct Node* next;
} Node;
Node* createList(int arr[], int n)
{
    Node* head = NULL;
    Node* tail = NULL;
    for (int i = 0; i < n; i++)
    {
        Node* newNode = (Node*)malloc(sizeof(Node));
        newNode->data = arr[i];
        newNode->prev = NULL;
        newNode->next = NULL;
        if (!head)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }
    return head;
}
Node* rotateByK(Node* head, int k)
{
    if (!head || k <= 0) return head;
    Node* tail = head;
    int len = 1;
    while (tail->next) { tail = tail->next; len++; }
    k = k % len;
    if (k == 0) return head;
    Node* curr = head;
    for (int i = 1; i < k && curr; i++)
        curr = curr->next;
    if (!curr || !curr->next) return head;
    Node* newHead = curr->next;
    newHead->prev = NULL;
    curr->next = NULL;
    tail->next = head;
    head->prev = tail;
    return newHead;
}
void printList(Node* head)
{
    while (head)
    {
        printf("%d", head->data);
        if (head->next) printf(" ⇄ ");
        head = head->next;
    }
    printf(" ⇄ NULL\n");
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    Node* head = createList(arr, n);
    head = rotateByK(head, 2);
    printf("List after rotation: ");
    printList(head);
    return 0;
}
