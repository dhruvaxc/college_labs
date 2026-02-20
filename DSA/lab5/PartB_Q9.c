// Q9) Linked List (Polynomial + Doubly + Circular)
// P1: (2,2) → (3,1), P2: (1,1) → (4,0)
// Addition, Multiplication; store mult in DLL, reverse; convert 
//to Circular, display one full cycle
#include <stdio.h>
#include <stdlib.h>
typedef struct PNode
{
    int coeff;
    int exp;
    struct PNode* next;
} PNode;
typedef struct DNode
{
    int coeff;
    int exp;
    struct DNode* prev;
    struct DNode* next;
} DNode;
PNode* createPoly(int coeffs[], int exps[], int n)
{
    PNode* head = NULL;
    PNode* tail = NULL;
    for (int i = 0; i < n; i++)
    {
        PNode* newNode = (PNode*)malloc(sizeof(PNode));
        newNode->coeff = coeffs[i];
        newNode->exp = exps[i];
        newNode->next = NULL;
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
    return head;
}
PNode* addPoly(PNode* p1, PNode* p2)
{
    PNode dummy;
    dummy.next = NULL;
    PNode* tail = &dummy;
    while (p1 && p2)
    {
        if (p1->exp > p2->exp)
        {
            tail->next = (PNode*)malloc(sizeof(PNode));
            tail->next->coeff = p1->coeff;
            tail->next->exp = p1->exp;
            tail->next->next = NULL;
            tail = tail->next;
            p1 = p1->next;
        }
        else if (p2->exp > p1->exp)
        {
            tail->next = (PNode*)malloc(sizeof(PNode));
            tail->next->coeff = p2->coeff;
            tail->next->exp = p2->exp;
            tail->next->next = NULL;
            tail = tail->next;
            p2 = p2->next;
        }
        else
        {
            int c = p1->coeff + p2->coeff;
            if (c != 0)
            {
                tail->next = (PNode*)malloc(sizeof(PNode));
                tail->next->coeff = c;
                tail->next->exp = p1->exp;
                tail->next->next = NULL;
                tail = tail->next;
            }
            p1 = p1->next;
            p2 = p2->next;
        }
    }
    while (p1)
    {
        tail->next = (PNode*)malloc(sizeof(PNode));
        tail->next->coeff = p1->coeff;
        tail->next->exp = p1->exp;
        tail->next->next = NULL;
        tail = tail->next;
        p1 = p1->next;
    }
    while (p2)
    {
        tail->next = (PNode*)malloc(sizeof(PNode));
        tail->next->coeff = p2->coeff;
        tail->next->exp = p2->exp;
        tail->next->next = NULL;
        tail = tail->next;
        p2 = p2->next;
    }
    return dummy.next;
}
void insertDLL(DNode** head, DNode** tail, int c, int e)
{
    DNode* curr = *head;
    while (curr && curr->exp > e) curr = curr->next;
    if (curr && curr->exp == e)
    {
        curr->coeff += c;
        return;
    }
    DNode* newNode = (DNode*)malloc(sizeof(DNode));
    newNode->coeff = c;
    newNode->exp = e;
    newNode->prev = NULL;
    newNode->next = NULL;
    if (!*head)
    {
        *head = *tail = newNode;
        return;
    }
    if (e > (*head)->exp)
    {
        newNode->next = *head;
        (*head)->prev = newNode;
        *head = newNode;
        return;
    }
    if (e < (*tail)->exp)
    {
        (*tail)->next = newNode;
        newNode->prev = *tail;
        *tail = newNode;
        return;
    }
    DNode* ins = *head;
    while (ins->next && ins->next->exp > e) ins = ins->next;
    newNode->next = ins->next;
    newNode->prev = ins;
    if (ins->next) ins->next->prev = newNode;
    else *tail = newNode;
    ins->next = newNode;
}
DNode* multToDLL(PNode* p1, PNode* p2)
{
    DNode* head = NULL;
    DNode* tail = NULL;
    for (PNode* a = p1; a; a = a->next)
    {
        for (PNode* b = p2; b; b = b->next)
        {
            insertDLL(&head, &tail, a->coeff * b->coeff, a->exp + b->exp);
        }
    }
    return head;
}
DNode* reverseDLL(DNode* head)
{
    DNode* prev = NULL;
    DNode* curr = head;
    while (curr)
    {
        DNode* nxt = curr->next;
        curr->next = prev;
        curr->prev = nxt;
        prev = curr;
        curr = nxt;
    }
    return prev;
}
DNode* dllToCircular(DNode* head)
{
    if (!head) return NULL;
    DNode* tail = head;
    while (tail->next) tail = tail->next;
    tail->next = head;
    head->prev = tail;
    return head;
}
void printPoly(PNode* p)
{
    while (p)
    {
        printf("(%d,%d)", p->coeff, p->exp);
        if (p->next) printf(" → ");
        p = p->next;
    }
    printf("\n");
}
void printDLL(DNode* head)
{
    while (head)
    {
        printf("(%d,%d)", head->coeff, head->exp);
        if (head->next) printf(" ⇄ ");
        head = head->next;
    }
    printf("\n");
}
void printCircularOneCycle(DNode* head)
{
    if (!head) return;
    DNode* p = head;
    do
    {
        printf("(%d,%d)", p->coeff, p->exp);
        printf(" → ");
        p = p->next;
    } while (p != head);
    printf("(back to (%d,%d))\n", head->coeff, head->exp);
}
int main()
{
    int c1[] = {2, 3}, e1[] = {2, 1};
    int c2[] = {1, 4}, e2[] = {1, 0};
    PNode* p1 = createPoly(c1, e1, 2);
    PNode* p2 = createPoly(c2, e2, 2);
    PNode* sum = addPoly(p1, p2);
    printf("Addition: ");
    printPoly(sum);
    DNode* mult = multToDLL(p1, p2);
    printf("Multiplication: ");
    printDLL(mult);
    mult = reverseDLL(mult);
    printf("Reversed DLL: ");
    printDLL(mult);
    mult = dllToCircular(mult);
    printf("Circular List: ");
    printCircularOneCycle(mult);
    return 0;
}
