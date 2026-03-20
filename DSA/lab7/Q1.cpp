/*Write a program to implement a Queue using Array with operations: Enqueue, Dequeue,
Display, Peek, Check Empty/Full.
Example:
 Enqueue(10), Enqueue(20), Enqueue(30)
 Display → 10 20 30
 Peek → 10
 Dequeue → removes 10
 Display → 20 30*/
#include <iostream>
using namespace std;
class QueueArray
{
private:
    int *arr;
    int capacity;
    int size;
public:
    QueueArray(int cap)
    {
        capacity = cap;
        arr = new int[capacity];
        size = 0;
    }
    ~QueueArray()
    {
        delete[] arr;
    }
    bool isEmpty() const
    {
        return size == 0;
    }
    bool isFull() const
    {
        return size == capacity;
    }
    bool Enqueue(int x)
    {
        if(isFull())
        {
            return false;
        }
        arr[size] = x;
        size++;
        return true;
    }
    bool Dequeue(int &out)
    {
        if(isEmpty())
        {
            return false;
        }
        out = arr[0];
        for(int i = 1; i < size; i++)
        {
            arr[i - 1] = arr[i];
        }
        size--;
        return true;
    }
    bool Peek(int &out) const
    {
        if(isEmpty())
        {
            return false;
        }
        out = arr[0];
        return true;
    }
    void Display() const
    {
        for(int i = 0; i < size; i++)
        {
            if(i > 0)
            {
                cout << " ";
            }
            cout << arr[i];
        }
        cout << "\n";
    }
};
int main()
{
    int cap;
    cout << "Enter capacity: ";
    if(!(cin >> cap))
    {
        return 0;
    }
    QueueArray q(cap);
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
    int p;
    if(q.Peek(p))
    {
        cout << "Peek -> " << p << "\n";
    }
    else
    {
        cout << "Peek -> Empty\n";
    }
    int d;
    if(q.Dequeue(d))
    {
        cout << "Dequeue -> " << d << "\n";
    }
    else
    {
        cout << "Dequeue -> Empty\n";
    }
    cout << "Display -> ";
    q.Display();
    cout << "Empty -> " << (q.isEmpty() ? 1 : 0) << "\n";
    cout << "Full -> " << (q.isFull() ? 1 : 0) << "\n";
    return 0;
}
