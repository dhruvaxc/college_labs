// Q8) Detect and Count Nodes in a Loop
// Output: Loop detected. Number of nodes in loop = 5
#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node* next;
} Node;
Node* createListWithLoop(int arr[], int n, int loopStartIndex)
{
    Node* head = NULL;
    Node* tail = NULL;
    Node* loopStart = NULL;
    for (int i = 0; i < n; i++)
    {
        Node* newNode = (Node*)malloc(sizeof(Node));
        newNode->data = arr[i];
        newNode->next = NULL;
        if (i == loopStartIndex) loopStart = newNode;
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
    if (tail && loopStart) tail->next = loopStart;
    return head;
}
int countNodesInLoop(Node* head)
{
    Node* slow = head;
    Node* fast = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            int count = 1;
            Node* p = slow->next;
            while (p != slow) { count++; p = p->next; }
            return count;
        }
    }
    return 0;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    Node* head = createListWithLoop(arr, n, 0);
    int count = countNodesInLoop(head);
    if (count > 0)
        printf("Loop detected. Number of nodes in loop = %d\n", count);
    else
        printf("No loop detected.\n");
    return 0;
}
