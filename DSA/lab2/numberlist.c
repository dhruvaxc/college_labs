#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct list
{
    int data;
    struct list* next;
} list;
int main() 
{
    list* s1 = NULL;
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    while(a>0)
    {
        list* newnode = (list*)malloc(sizeof(list));
        newnode->data = a%10;
        newnode->next = s1;
        s1 = newnode;
        a=a/10;
    }
    printf("linked list of digits:\n");
    while (s1!=NULL)
    {
        printf("%d",s1->data);
        if(s1->next!=NULL)
            printf("->");   
        s1=s1->next;
    }
    return 0;
}