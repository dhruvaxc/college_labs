// Q4) Find Maximum Sum Sublist in a Doubly Linked List
// Input: 2 ⇄ -4 ⇄ 6 ⇄ -3 ⇄ 9 ⇄ -8 ⇄ NULL
// Output: Maximum sum sublist: 6 ⇄ -3 ⇄ 9, Maximum Sum = 12
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
void maxSumSublist(Node* head, Node** start, Node** end, int* maxSum)
{
    *maxSum = 0;
    *start = *end = head;
    if (!head) return;
    int currSum = 0;
    Node* currStart = head;
    Node* p = head;
    while (p)
    {
        currSum += p->data;
        if (currSum > *maxSum)
        {
            *maxSum = currSum;
            *start = currStart;
            *end = p;
        }
        if (currSum < 0)
        {
            currSum = 0;
            currStart = p->next;
        }
        p = p->next;
    }
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
    int arr[] = {2, -4, 6, -3, 9, -8};
    int n = sizeof(arr) / sizeof(arr[0]);
    Node* head = createList(arr, n);
    Node* start, *end;
    int maxSum;
    maxSumSublist(head, &start, &end, &maxSum);
    printf("Maximum sum sublist: ");
    Node* p = start;
    while (p != end) { printf("%d ⇄ ", p->data); p = p->next; }
    printf("%d, Maximum Sum = %d\n", end->data, maxSum);
    return 0;
}
