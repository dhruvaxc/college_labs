// Check whether a singly linked list is a palindrome
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node* newNode(int data)
{
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}

struct Node* reverseList(struct Node* head)
{
    struct Node* prev = NULL;
    struct Node* current = head;
    struct Node* next = NULL;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}

int isPalindrome(struct Node* head)
{
    if (head == NULL || head->next == NULL)
    {
        return 1;
    }
    struct Node* slow = head;
    struct Node* fast = head;
    while (fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    struct Node* secondHalf = reverseList(slow->next);
    struct Node* firstHalf = head;
    struct Node* temp = secondHalf;
    int result = 1;
    while (temp != NULL)
    {
        if (firstHalf->data != temp->data)
        {
            result = 0;
            break;
        }
        firstHalf = firstHalf->next;
        temp = temp->next;
    }
    slow->next = reverseList(secondHalf);
    return result;
}

int main()
{
    int n, value;
    struct Node* head = NULL;
    struct Node* temp = NULL;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter value for node %d: ", i + 1);
        scanf("%d", &value);
        struct Node* node = newNode(value);
        if (head == NULL)
        {
            head = node;
            temp = node;
        }
        else
        {
            temp->next = node;
            temp = node;
        }
    }
    if (isPalindrome(head))
    {
        printf("The linked list is a palindrome\n");
    }
    else
    {
        printf("The linked list is not a palindrome\n");
    }
    return 0;
}