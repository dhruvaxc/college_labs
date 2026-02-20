// Clone a linked list with next and random pointers
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Node
{
    int data;
    struct Node* next;
    struct Node* random;
};

struct Node* newNode(int data)
{
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    node->random = NULL;
    return node;
}

struct Node* getNodeAt(struct Node* head, int index)
{
    struct Node* temp = head;
    for (int i = 0; i < index && temp != NULL; i++)
    {
        temp = temp->next;
    }
    return temp;
}

struct Node* cloneList(struct Node* head)
{
    if (head == NULL)
    {
        return NULL;
    }
    struct Node* current = head;
    while (current != NULL)
    {
        struct Node* copy = newNode(current->data);
        copy->next = current->next;
        current->next = copy;
        current = copy->next;
    }
    current = head;
    while (current != NULL)
    {
        if (current->random != NULL)
        {
            current->next->random = current->random->next;
        }
        current = current->next->next;
    }
    struct Node* original = head;
    struct Node* copyHead = head->next;
    struct Node* copy = copyHead;
    while (original != NULL)
    {
        original->next = original->next->next;
        if (copy->next != NULL)
        {
            copy->next = copy->next->next;
        }
        original = original->next;
        copy = copy->next;
    }
    return copyHead;
}

void printList(struct Node* head)
{
    struct Node* temp = head;
    while (temp != NULL)
    {
        printf("Data = %d, Random = %d\n", temp->data, temp->random ? temp->random->data : -1);
        temp = temp->next;
    }
}

int main()
{
    int n, value;
    struct Node* head = NULL;
    struct Node* temp = NULL;
    srand(time(NULL));
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
    temp = head;
    for (int i = 0; i < n; i++)
    {
        int randomIndex = rand() % n;
        struct Node* randomNode = getNodeAt(head, randomIndex);
        temp->random = randomNode;
        temp = temp->next;
    }
    printf("Original list:\n");
    printList(head);
    struct Node* cloned = cloneList(head);
    printf("Cloned list:\n");
    printList(cloned);
    return 0;
}