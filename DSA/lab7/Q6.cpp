#include <iostream>
#include <stack>
#include <vector>
#include <limits>
using namespace std;
class QueueArray
{
private:
    int *arr;
    int capacity;
    int front;
    int rear;
    int size;
public:
    QueueArray(int cap)
    {
        capacity = cap;
        arr = new int[capacity];
        front = 0;
        rear = -1;
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
    int Size() const
    {
        return size;
    }
    bool Enqueue(int x)
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
    bool Dequeue(int &out)
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
    vector<int> ToVector() const
    {
        vector<int> v;
        v.reserve(size);
        for(int i = 0; i < size; i++)
        {
            v.push_back(arr[(front + i) % capacity]);
        }
        return v;
    }
    void Reverse()
    {
        stack<int> st;
        int x;
        while(!isEmpty())
        {
            Dequeue(x);
            st.push(x);
        }
        while(!st.empty())
        {
            Enqueue(st.top());
            st.pop();
        }
    }
};
int CountElements(const QueueArray &q)
{
    return q.Size();
}
long long SumElements(const QueueArray &q)
{
    long long sum = 0;
    vector<int> v = q.ToVector();
    for(size_t i = 0; i < v.size(); i++)
    {
        sum += v[i];
    }
    return sum;
}
int MinElements(const QueueArray &q)
{
    vector<int> v = q.ToVector();
    int mn = numeric_limits<int>::max();
    for(size_t i = 0; i < v.size(); i++)
    {
        if(v[i] < mn)
        {
            mn = v[i];
        }
    }
    return mn;
}
int MaxElements(const QueueArray &q)
{
    vector<int> v = q.ToVector();
    int mx = numeric_limits<int>::min();
    for(size_t i = 0; i < v.size(); i++)
    {
        if(v[i] > mx)
        {
            mx = v[i];
        }
    }
    return mx;
}
int main()
{
    int n;
    vector<int> vals;
    cout << "Enter number of elements: ";
    if(!(cin >> n))
    {
        return 0;
    }
    vals.resize(n);
    for(int i = 0; i < n; i++)
    {
        cout << "Enter element " << (i + 1) << ": ";
        cin >> vals[i];
    }
    QueueArray q(n + 5);
    for(int i = 0; i < n; i++)
    {
        q.Enqueue(vals[i]);
    }
    int count = CountElements(q);
    long long sum = SumElements(q);
    int mn = MinElements(q);
    int mx = MaxElements(q);
    cout << "Count -> " << count << "\n";
    cout << "Sum -> " << sum << "\n";
    cout << "Min -> " << mn << "\n";
    cout << "Max -> " << mx << "\n";
    q.Reverse();
    vector<int> rev = q.ToVector();
    cout << "Reverse -> ";
    for(size_t i = 0; i < rev.size(); i++)
    {
        if(i > 0)
        {
            cout << " ";
        }
        cout << rev[i];
    }
    cout << "\n";
    return 0;
}
