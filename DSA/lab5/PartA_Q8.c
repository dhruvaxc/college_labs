// Q8) Clone a Doubly Linked List with Random Pointer
// Output: Original and cloned lists are identical. Random pointers copied successfully.
#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node* prev;
    struct Node* next;
    struct Node* random;
} Node;
Node* createListWithRandom(int arr[], int n, int randomIndices[])
{
    Node* nodes[100];
    Node* head = NULL;
    Node* tail = NULL;
    for (int i = 0; i < n; i++)
    {
        Node* newNode = (Node*)malloc(sizeof(Node));
        newNode->data = arr[i];
        newNode->prev = NULL;
        newNode->next = NULL;
        newNode->random = NULL;
        nodes[i] = newNode;
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
    for (int i = 0; i < n; i++)
        if (randomIndices[i] >= 0 && randomIndices[i] < n)
            nodes[i]->random = nodes[randomIndices[i]];
    return head;
}
Node* cloneList(Node* head)
{
    if (!head) return NULL;
    Node* curr = head;
    while (curr)
    {
        Node* copy = (Node*)malloc(sizeof(Node));
        copy->data = curr->data;
        copy->prev = NULL;
        copy->next = curr->next;
        copy->random = NULL;
        curr->next = copy;
        if (copy->next) copy->next->prev = copy;
        curr = copy->next;
    }
    curr = head;
    while (curr)
    {
        if (curr->random)
            curr->next->random = curr->random->next;
        curr = curr->next->next;
    }
    curr = head;
    Node* cloneHead = head->next;
    while (curr)
    {
        Node* copy = curr->next;
        curr->next = copy->next;
        if (copy->next) copy->next->prev = copy;
        copy->prev = curr->prev;
        curr = curr->next;
    }
    cloneHead->prev = NULL;
    return cloneHead;
}
int areIdentical(Node* orig, Node* clone)
{
    while (orig && clone)
    {
        if (orig->data != clone->data) return 0;
        if (orig->random && (!clone->random || orig->random->data != clone->random->data)) return 0;
        if (!orig->random && clone->random) return 0;
        orig = orig->next;
        clone = clone->next;
    }
    return (orig == NULL && clone == NULL);
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
    int arr[] = {1, 2, 3, 4, 5};
    int randomIndices[] = {2, 0, 4, 1, 3};
    int n = 5;
    Node* head = createListWithRandom(arr, n, randomIndices);
    Node* clone = cloneList(head);
    if (areIdentical(head, clone))
        printf("Original and cloned lists are identical. Random pointers copied successfully.\n");
    else
        printf("Lists differ.\n");
    return 0;
}
