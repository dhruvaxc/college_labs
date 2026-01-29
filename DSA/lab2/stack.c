#include <stdio.h>
#include <stdlib.h>
typedef struct Stack
{
    int data;
    struct Stack* below;
} Stack;
void push(Stack**);
void pop(Stack**);
void peep(Stack*);
void display(Stack*);
int main() 
{
    Stack* s1 = NULL;
    int n,i=1;
    printf("Which operation do you want to perform?\n");
    printf("1. Push 2. Pop 3. Peep 4. Display stack 5. Exit ");
    while(i)
    {
        scanf("%d", &n);
        printf("\n\n");
        switch(n) 
        {
            case 1:
                push(&s1);
                break;
            case 2:
                pop(&s1);
                break;
            case 3:
                peep(s1);
                break;
            case 4:
                display(s1);
                break;
            default:
                printf("Invalid operation\n");
        }
    }
    return 0;
}
void push(Stack** s) {
    int val;
    printf("push : ");
    scanf("%d", &val);

    Stack* newnode = (Stack*)malloc(sizeof(Stack));
    newnode->data = val;
    newnode->below = *s;
    *s = newnode;
}
void pop(Stack** s) 
{
    if (*s == NULL) 
    {
        printf("Stack underflow\n");
        return;
    }
    Stack* temp = *s;
    printf("pop : %d\n", temp->data);
    *s = (*s)->below;
    free(temp);
}
void peep(Stack* s) 
{
    if (s == NULL) 
    {
        printf("Stack is empty\n");
    } 
    else 
    {
        printf("Top element is: %d\n", s->data);
    }
}
void display(Stack* s) 
{
    if (s == NULL) 
    {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements:\n");
    while (s != NULL) 
    {
        printf("%d\n", s->data);
        s = s->below;
    }
}