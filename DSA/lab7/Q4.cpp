/*Implement Circular Queue with Insert, Delete, Display.
Example (size = 5):
 Insert: 10 20 30 40
 Delete two elements
 Insert 50 60
 Display → 30 40 50 60
*/
#include <iostream>
using namespace std;
class CircularQueue
{
private:
    int *arr;
    int capacity;
    int front;
    int rear;
    int size;
public:
    CircularQueue(int cap)
    {
        capacity = cap;
        arr = new int[capacity];
        front = 0;
        rear = -1;
        size = 0;
    }
    ~CircularQueue()
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
    bool Insert(int x)
    {
        if(isFull())
        {
            return false;
        }
        rear = (rear + 1) % capacity;
        arr[rear] = x;
        size++;
        return true;
    }
    bool Delete(int &out)
    {
        if(isEmpty())
        {
            return false;
        }
        out = arr[front];
        front = (front + 1) % capacity;
        size--;
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
            cout << arr[(front + i) % capacity];
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
    CircularQueue q(cap);
    int k1;
    cout << "Enter number of elements to insert (k1): ";
    if(!(cin >> k1))
    {
        return 0;
    }
    for(int i = 0; i < k1; i++)
    {
        int x;
        cout << "Enter element " << (i + 1) << ": ";
        cin >> x;
        q.Insert(x);
    }
    int kDel;
    cout << "Enter number of deletions (kDel): ";
    if(!(cin >> kDel))
    {
        return 0;
    }
    int out;
    for(int i = 0; i < kDel; i++)
    {
        q.Delete(out);
    }
    int k2;
    cout << "Enter number of elements to insert again (k2): ";
    if(!(cin >> k2))
    {
        return 0;
    }
    for(int i = 0; i < k2; i++)
    {
        int x;
        cout << "Enter element " << (i + 1) << ": ";
        cin >> x;
        q.Insert(x);
    }
    cout << "Display -> ";
    q.Display();
    return 0;
}
