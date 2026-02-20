// Merge K sorted linked lists into one sorted linked list
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

struct Node* mergeTwoLists(struct Node* l1, struct Node* l2)
{
    if (l1 == NULL)
    {
        return l2;
    }
    if (l2 == NULL)
    {
        return l1;
    }
    struct Node* result;
    if (l1->data <= l2->data)
    {
        result = l1;
        result->next = mergeTwoLists(l1->next, l2);
    }
    else
    {
        result = l2;
        result->next = mergeTwoLists(l1, l2->next);
    }
    return result;
}

struct Node* mergeKLists(struct Node** lists, int k)
{
    if (k == 0)
    {
        return NULL;
    }
    while (k > 1)
    {
        int i = 0;
        int j = k - 1;
        while (i < j)
        {
            lists[i] = mergeTwoLists(lists[i], lists[j]);
            i++;
            j--;
            k--;
        }
    }
    return lists[0];
}

void printList(struct Node* head)
{
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main()
{
    int k, n, value;
    printf("Enter number of lists: ");
    scanf("%d", &k);
    struct Node** lists = (struct Node**)malloc(k * sizeof(struct Node*));
    for (int i = 0; i < k; i++)
    {
        lists[i] = NULL;
        struct Node* temp = NULL;
        printf("Enter number of nodes in list %d: ", i + 1);
        scanf("%d", &n);
        for (int j = 0; j < n; j++)
        {
            printf("Enter value for node %d: ", j + 1);
            scanf("%d", &value);
            struct Node* node = newNode(value);
            if (lists[i] == NULL)
            {
                lists[i] = node;
                temp = node;
            }
            else
            {
                temp->next = node;
                temp = node;
            }
        }
    }
    struct Node* merged = mergeKLists(lists, k);
    printf("Merged sorted list: ");
    printList(merged);
    return 0;
}