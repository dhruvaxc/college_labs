// Q5) Check Whether the Doubly Linked List is Palindrome
// Input: 1 ⇄ 2 ⇄ 3 ⇄ 2 ⇄ 1 ⇄ NULL
// Output: The doubly linked list is a PALINDROME.
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
int isPalindrome(Node* head)
{
    if (!head) return 1;
    Node* left = head;
    Node* right = head;
    while (right->next) right = right->next;
    while (left != right && left->prev != right)
    {
        if (left->data != right->data) return 0;
        left = left->next;
        right = right->prev;
    }
    return 1;
}
int main()
{
    int arr[] = {1, 2, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    Node* head = createList(arr, n);
    if (isPalindrome(head))
        printf("The doubly linked list is a PALINDROME.\n");
    else
        printf("The doubly linked list is NOT a palindrome.\n");
    return 0;
}
