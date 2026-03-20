/*Implement Deque and use it to check palindrome.
Example:
Input → &quot;madam&quot;
Front = m, Rear = m → remove
Front = a, Rear = a → remove
Result → Palindrome
Input → &quot;hello&quot;
Result → Not Palindrome*/
#include <iostream>
#include <deque>
#include <string>
using namespace std;
bool IsPalindrome(const string &s)
{
    deque<char> dq;
    for(size_t i = 0; i < s.size(); i++)
    {
        dq.push_back(s[i]);
    }
    while(dq.size() > 1)
    {
        if(dq.front() != dq.back())
        {
            return false;
        }
        dq.pop_front();
        dq.pop_back();
    }
    return true;
}
int main()
{
    string s;
    cout << "Enter string: ";
    if(!(cin >> s))
    {
        return 0;
    }
    if(IsPalindrome(s))
    {
        cout << "Palindrome\n";
    }
    else
    {
        cout << "Not Palindrome\n";
    }
    return 0;
}
