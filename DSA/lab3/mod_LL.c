#include <stdio.h>
#include <stdlib.h>
typedef struct list
{
    int data;
    struct list* next;
} list;
int main()
{
    list* head = NULL;
    list* current = NULL;
    list* temp = NULL;
    int a, cont = 1;
    while (cont)
    {
        temp = (list*)malloc(sizeof(list));
        if (temp == NULL)
        {
            printf("Memory allocation failed!\n");
            return 1;
        }
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
            current->next = temp;
        }
        current = temp;
        printf("Continue? (1=yes, 0=no): ");
        scanf("%d", &cont);
    }
    printf("\nOriginal Linked List:\n");
    temp = head;
    int i = 0;
    while (temp != NULL)
    {
        if (i)
            printf("-> ");
        printf("%d ", temp->data);
        temp = temp->next;
        i++;
    }
    printf("\nEnter the node position to delete: ");
    int del_node;
    scanf("%d", &del_node);
    if (del_node <= 0)
    {
        printf("Invalid position!\n");
        return 1;
    }
    temp = head;
    if (del_node == 1)
    {
        head = head->next;
        free(temp);
    }
    else
    {
        list* prev = NULL;
        i = 1;
        while (i < del_node && temp != NULL)
        {
            prev = temp;
            temp = temp->next;
            i++;
        }
        if (temp == NULL)
        {
            printf("Position out of range!\n");
            return 1;
        }
        prev->next = temp->next;
        free(temp);
    }
    printf("\nModified Linked List:\n");
    temp = head;
    i = 0;
    while (temp != NULL)
    {
        if (i)
            printf("-> ");
        printf("%d ", temp->data);
        temp = temp->next;
        i++;
    }
    return 0;
}