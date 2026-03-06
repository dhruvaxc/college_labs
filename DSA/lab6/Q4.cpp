/*Implementation of Stacks using Linked List: A stack can be implemented using
a linked list where each stack element is represented as a Node :
 A Node structure/class that contains:
data → to store the element.
next → pointer/reference to the next node in the stack.
 A pointer/reference top that always points to the current top node of the
stack.
Initially, top = null to represent an empty stack.*/
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

class Stack
{
    Node* top;

public:
    Stack()
    {
        top = nullptr;
    }

    void Push(int x)
    {
        Node* temp = new Node();
        temp->data = x;
        temp->next = top;
        top = temp;
        cout << x << " pushed\n";
    }

    void Pop()
    {
        if (top == nullptr)
        {
            cout << "Stack Underflow\n";
            return;
        }
        cout << top->data << " popped\n";
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    int Peek()
    {
        if (top == nullptr)
        {
            cout << "Stack is Empty\n";
            return -1;
        }
        return top->data;
    }

    bool IsEmpty()
    {
        return top == nullptr;
    }
};

int main()
{
    Stack st;
    int choice, value;
    do
    {
        cout << "\n1. Push\n2. Pop\n3. Peek\n4. IsEmpty\n5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value to push: ";
            cin >> value;
            st.Push(value);
            break;
        case 2:
            st.Pop();
            break;
        case 3:
            cout << "Top element: " << st.Peek() << "\n";
            break;
        case 4:
            cout << (st.IsEmpty() ? "Stack is Empty\n" : "Stack is Not Empty\n");
            break;
        case 5:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice\n";
        }
    } while (choice != 5);

    return 0;
}