// Q3) Delete All Duplicate Nodes (Remove all occurrences)
// Input: 5 ⇄ 2 ⇄ 4 ⇄ 2 ⇄ 5 ⇄ 3 ⇄ NULL
// Output: List after removing all duplicates: 4 ⇄ 3 ⇄ NULL
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
int countOccur(Node* head, int val)
{
    int c = 0;
    while (head) { if (head->data == val) c++; head = head->next; }
    return c;
}
Node* removeAllDuplicates(Node* head)
{
    Node* curr = head;
    while (curr)
    {
        int val = curr->data;
        if (countOccur(head, val) > 1)
        {
            Node* t = head;
            while (t)
            {
                Node* nxt = t->next;
                if (t->data == val)
                {
                    if (t->prev) t->prev->next = t->next;
                    else head = t->next;
                    if (t->next) t->next->prev = t->prev;
                    free(t);
                }
                t = nxt;
            }
            curr = head;
            continue;
        }
        curr = curr->next;
    }
    return head;
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
    int arr[] = {5, 2, 4, 2, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    Node* head = createList(arr, n);
    head = removeAllDuplicates(head);
    printf("List after removing all duplicates: ");
    printList(head);
    return 0;
}
