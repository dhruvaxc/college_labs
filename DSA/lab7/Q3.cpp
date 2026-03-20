#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;
class QueueTwoStacks
{
private:
    stack<int> s1;
    stack<int> s2;
    void MoveToS2()
    {
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
    }
public:
    void Enqueue(int x)
    {
        s1.push(x);
    }
    bool isEmpty() const
    {
        return s1.empty() && s2.empty();
    }
    bool Dequeue(int &out)
    {
        if(isEmpty())
        {
            return false;
        }
        if(s2.empty())
        {
            MoveToS2();
        }
        out = s2.top();
        s2.pop();
        return true;
    }
    void Display()
    {
        stack<int> t2 = s2;
        stack<int> t1 = s1;
        vector<int> frontPart;
        while(!t2.empty())
        {
            frontPart.push_back(t2.top());
            t2.pop();
        }
        vector<int> tailPart;
        while(!t1.empty())
        {
            tailPart.push_back(t1.top());
            t1.pop();
        }
        reverse(tailPart.begin(), tailPart.end());
        vector<int> all;
        all.insert(all.end(), frontPart.begin(), frontPart.end());
        all.insert(all.end(), tailPart.begin(), tailPart.end());
        for(size_t i = 0; i < all.size(); i++)
        {
            if(i > 0)
            {
                cout << " ";
            }
            cout << all[i];
        }
        cout << "\n";
    }
};
int main()
{
    QueueTwoStacks q;
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
    return 0;
}
