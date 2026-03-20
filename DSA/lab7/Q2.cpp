#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
class QueueLinkedList
{
private:
    Node *head;
    Node *tail;
    int size;
public:
    QueueLinkedList()
    {
        head = nullptr;
        tail = nullptr;
        size = 0;
    }
    ~QueueLinkedList()
    {
        while(head != nullptr)
        {
            Node *tmp = head;
            head = head->next;
            delete tmp;
        }
        tail = nullptr;
        size = 0;
    }
    bool isEmpty() const
    {
        return size == 0;
    }
    bool Enqueue(int x)
    {
        Node *node = new Node;
        node->data = x;
        node->next = nullptr;
        if(tail == nullptr)
        {
            head = node;
            tail = node;
        }
        else
        {
            tail->next = node;
            tail = node;
        }
        size++;
        return true;
    }
    bool Dequeue(int &out)
    {
        if(isEmpty())
        {
            return false;
        }
        Node *tmp = head;
        out = tmp->data;
        head = head->next;
        delete tmp;
        size--;
        if(size == 0)
        {
            tail = nullptr;
        }
        return true;
    }
    bool Peek(int &out) const
    {
        if(isEmpty())
        {
            return false;
        }
        out = head->data;
        return true;
    }
    void Display() const
    {
        Node *cur = head;
        int idx = 0;
        while(cur != nullptr)
        {
            if(idx > 0)
            {
                cout << " ";
            }
            cout << cur->data;
            cur = cur->next;
            idx++;
        }
        cout << "\n";
    }
};
int main()
{
    QueueLinkedList q;
    int n;
    cout << "Enter number of elements: ";
    if(!(cin >> n))
    {
        return 0;
    }
    for(int i = 0; i < n; i++)
    {
        int x;
        cout << "Enter element " << (i + 1) << ": ";
        cin >> x;
        q.Enqueue(x);
    }
    cout << "Display -> ";
    q.Display();
    cout << "Linked List grows dynamically, array has fixed size.\n";
    return 0;
}
