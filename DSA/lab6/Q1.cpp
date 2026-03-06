/*Q1 Given an array of strings arr[] representing a postfix expression, evaluate it. A
postfix expression is of the form operand1 operand2 operator 
(e.g., &quot;a b +&quot;), where two operands are followed by an operator.
Note: The operators can include +, -, *, /, and ^ (where ^ denotes exponentiation,
i.e., power). Division / uses floor division.*/
#include <bits/stdc++.h>
using namespace std;

int evaluatePostfix(vector<string> &arr)
{
    stack<long long> st;
    for (string s : arr)
    {
        if (s == "+" || s == "-" || s == "*" || s == "/" || s == "^")
        {
            long long b = st.top(); st.pop();
            long long a = st.top(); st.pop();
            if (s == "+") st.push(a + b);
            else if (s == "-") st.push(a - b);
            else if (s == "*") st.push(a * b);
            else if (s == "/") st.push(a / b);
            else if (s == "^") st.push(pow(a, b));
        }
        else
        {
            st.push(stoll(s));
        }
    }
    return st.top();
}
int main()
{
    int n;
    cout << "Enter number of tokens in postfix expression: ";
    cin >> n;

    vector<string> arr(n);
    cout << "Enter the tokens (operands/operators) separated by space:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Result: " << evaluatePostfix(arr) << "\n";
    return 0;
}