#include <stdio.h>
#include <stdlib.h>
typedef struct list
{
    int data;
    struct list* next;
}
list;
int main()
{
    list* head = NULL;
    list* l1 = NULL;
    list* temp = NULL;
    int a, i = 1;
    while (i)
    {
        temp = (list*)malloc(sizeof(list));
        printf("data : ");
        scanf("%d", &a);
        temp->data = a;
        temp->next = NULL;
        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            l1->next = temp;
        }
        l1 = temp;
        printf("Continue? (1=yes, 0=no): ");
        scanf("%d", &i);
    }
    printf("\nOriginal Linked List:\n");
    temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
    list* prev = NULL;
    list* curr = head;
    list* next = NULL;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
    printf("\nReversed Linked List:\n");
    temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
    return 0;
}