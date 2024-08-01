//infix expretion for ex 2+3*4 to 234*+

#include <iostream>
#include <stack>
#include <string>
using namespace std;

int precedence(char c) {
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

string infixToPostfix(string s) {
    stack<char> st;
    string result;

    for (int i = 0; i < s.length(); i++) {
        char c = s[i];

        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            result += c;
        } else if (c == '(') {
            st.push('(');
        } else if (c == ')') {
            while (!st.empty() && st.top() != '(') {
                result += st.top();
                st.pop();
            }
            if (!st.empty()) {
                st.pop();
            }
        } else {
            while (!st.empty() && precedence(s[i]) <= precedence(st.top())) {
                result += st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    while (!st.empty()) {
        result += st.top();
        st.pop();
    }

    return result;
}

int main() {
    string s = "a+b*c";
    cout << infixToPostfix(s) << endl;

    return 0;
}
