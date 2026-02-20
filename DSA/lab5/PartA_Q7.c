// Q7) Swap Nodes (NOT Data) at Two Given Positions
// Input: List: 10 ⇄ 20 ⇄ 30 ⇄ 40 ⇄ NULL, Swap positions 2 and 4
// Output: List after swapping nodes: 10 ⇄ 40 ⇄ 30 ⇄ 20 ⇄ NULL
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
Node* getAt(Node* head, int pos)
{
    for (int i = 1; i < pos && head; i++) head = head->next;
    return head;
}
void swapNodes(Node** headRef, int pos1, int pos2)
{
    if (pos1 == pos2) return;
    if (pos1 > pos2) { int t = pos1; pos1 = pos2; pos2 = t; }
    Node* n1 = getAt(*headRef, pos1);
    Node* n2 = getAt(*headRef, pos2);
    if (!n1 || !n2) return;
    Node* p1 = n1->prev;
    Node* nxt1 = n1->next;
    Node* p2 = n2->prev;
    Node* nxt2 = n2->next;
    if (n1->next == n2)
    {
        if (p1) p1->next = n2;
        else *headRef = n2;
        n2->prev = p1;
        n2->next = n1;
        n1->prev = n2;
        n1->next = nxt2;
        if (nxt2) nxt2->prev = n1;
    }
    else
    {
        if (p1) p1->next = n2;
        else *headRef = n2;
        n2->prev = p1;
        n2->next = nxt1;
        if (nxt1) nxt1->prev = n2;
        if (p2) p2->next = n1;
        else *headRef = n1;
        n1->prev = p2;
        n1->next = nxt2;
        if (nxt2) nxt2->prev = n1;
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
    int arr[] = {10, 20, 30, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    Node* head = createList(arr, n);
    swapNodes(&head, 2, 4);
    printf("List after swapping nodes: ");
    printList(head);
    return 0;
}
