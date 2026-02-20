// Q1) Find Pair with Given Sum (Two-Pointer Technique)
// Input: List: 1 ⇄ 2 ⇄ 4 ⇄ 5 ⇄ 6 ⇄ 8 ⇄ 9 ⇄ NULL, Sum = 7
// Output: Pairs with given sum: (1, 6) (2, 5)
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
void findPairsWithSum(Node* head, int sum)
{
    Node* left = head;
    Node* right = head;
    while (right->next) right = right->next;
    printf("Pairs with given sum: ");
    while (left && right && left != right && left->prev != right)
    {
        int s = left->data + right->data;
        if (s == sum)
        {
            printf("(%d, %d) ", left->data, right->data);
            left = left->next;
            right = right->prev;
        }
        else if (s < sum)
            left = left->next;
        else
            right = right->prev;
    }
    printf("\n");
}
int main()
{
    int arr[] = {1, 2, 4, 5, 6, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    Node* head = createList(arr, n);
    findPairsWithSum(head, 7);
    return 0;
}
