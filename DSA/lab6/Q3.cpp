/*To implement stacks using Arrays and perform the following operation:
Push()
Pop()
Peek()
Isempty() */
#include <bits/stdc++.h>
using namespace std;

class Stack
{
    int top;
    int capacity;
    int *arr;

public:
    Stack(int size)
    {
        capacity = size;
        arr = new int[capacity];
        top = -1;
    }

    void Push(int x)
    {
        if (top == capacity - 1)
        {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = x;
        cout << x << " pushed\n";
    }

    void Pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow\n";
            return;
        }
        cout << arr[top--] << " popped\n";
    }

    int Peek()
    {
        if (top == -1)
        {
            cout << "Stack is Empty\n";
            return -1;
        }
        return arr[top];
    }

    bool IsEmpty()
    {
        return top == -1;
    }
};

int main()
{
    int size;
    cout << "Enter stack size: ";
    cin >> size;
    Stack st(size);

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