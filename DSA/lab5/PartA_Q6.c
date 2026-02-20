// Q6) Merge Two Sorted Doubly Linked Lists
// Input: List1: 1 ⇄ 3 ⇄ 5 ⇄ NULL, List2: 2 ⇄ 4 ⇄ 6 ⇄ NULL
// Output: Merged Sorted Doubly Linked List: 1 ⇄ 2 ⇄ 3 ⇄ 4 ⇄ 5 ⇄ 6 ⇄ NULL
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
Node* mergeSorted(Node* a, Node* b)
{
    Node dummy;
    dummy.next = NULL;
    dummy.prev = NULL;
    Node* tail = &dummy;
    while (a && b)
    {
        if (a->data <= b->data)
        {
            tail->next = a;
            a->prev = tail;
            tail = a;
            a = a->next;
        }
        else
        {
            tail->next = b;
            b->prev = tail;
            tail = b;
            b = b->next;
        }
    }
    if (a) { tail->next = a; a->prev = tail; }
    else if (b) { tail->next = b; b->prev = tail; }
    if (dummy.next) dummy.next->prev = NULL;
    return dummy.next;
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
    int a[] = {1, 3, 5}, b[] = {2, 4, 6};
    int na = 3, nb = 3;
    Node* list1 = createList(a, na);
    Node* list2 = createList(b, nb);
    Node* merged = mergeSorted(list1, list2);
    printf("Merged Sorted Doubly Linked List: ");
    printList(merged);
    return 0;
}
