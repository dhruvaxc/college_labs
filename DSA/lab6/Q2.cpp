/*Convert a prefix expression into postfix notation.
Input : Prefix : *+AB-CD
Output : Postfix : AB+CD-*
Explanation : Prefix to Infix : (A+B) * (C-D)
Infix to Postfix : AB+CD-* */
#include <bits/stdc++.h>
using namespace std;

string prefixToPostfix(string prefix)
{
    stack<string> st;
    for (int i = prefix.size() - 1; i >= 0; i--)
    {
        char c = prefix[i];
        if (isalpha(c))
        {
            st.push(string(1, c));
        }
        else
        {
            string a = st.top(); st.pop();
            string b = st.top(); st.pop();
            string expr = a + b + c;
            st.push(expr);
        }
    }
    return st.top();
}

int main()
{
    string prefix;
    cout << "Enter prefix expression: ";
    cin >> prefix;

    cout << "Postfix expression: " << prefixToPostfix(prefix) << "\n";
    return 0;
}