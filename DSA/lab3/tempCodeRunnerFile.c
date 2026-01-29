#include<stdio.h>
#include<stdlib.h>
typedef struct list
{
    int data;
    struct list* next;
} list;
int main()
{
    list* head=NULL;
    list* end=NULL;
    list* temp=NULL;
    int n=1,i=1;
    while(i)
    {
        temp=(list*)malloc(sizeof(list));
        if(temp==NULL)
        {
            printf("Memory allocation failed!\n");
            return 1;
        }
        printf("data : ");
        scanf("%d",&n);
        temp->data=n;
        temp->next=NULL;
        if(head==NULL)
        {
            head=temp;
        }
        else
        {
            end->next=temp;
        }
        end=temp;
        printf("Continue? (1=yes, 0=no): ");
        scanf("%d",&i);
    }
    printf("\nOriginal Linked List:\n");
    temp=head;
    i = 0;
    while (temp != NULL)
    {
        if (i)
            printf("-> ");
        printf("%d ", temp->data);
        temp = temp->next;
        i++;
    }
    printf("\nEnter the data to be inserted at the beginning: ");
    temp=(list*)malloc(sizeof(list));
    if(temp==NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }
    scanf("%d",&temp->data);
    temp->next=head;
    head=temp;
    printf("\nLinked List after insertion at the beginning:\n");
    temp=head;
    i = 0;
    while (temp != NULL)
    {
        if (i)
            printf("-> ");
        printf("%d ", temp->data);
        temp = temp->next;
        i++;
    }
    printf("\nenter the data that is to be inserted at the end: ");
    temp=(list*)malloc(sizeof(list));
    if(temp==NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }
    scanf("%d",&temp->data);
    temp->next=NULL;
    end->next=temp;
    end=temp;
    printf("\nLinked List after insertion at the end:\n");
    temp=head;
    i = 0;
    while (temp != NULL)
    {
        if (i)
            printf("-> ");
        printf("%d ", temp->data);
        temp = temp->next;
        i++;
    }
    printf("\nenter the index where the data is to be inserted: ");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("Invalid position!\n");
        return 1;
    }
    temp=(list*)malloc(sizeof(list));
    if(temp==NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("\nenter the data to be inserted at index %d: ",n);
    scanf("%d",&temp->data);
    if(n==1)
    {
        temp->next=head;
        head=temp;
    }
    else
    {
        list* temp2=head;
        i=1;
        while(i<(n-1))
        {
            temp2=temp2->next;
            i++;
        }
        temp->next=temp2->next;
        temp2->next=temp;
    }
    printf("\nLinked List after insertion at index %d:\n",n);
    temp=head;
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