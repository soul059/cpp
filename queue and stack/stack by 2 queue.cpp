// make an stack by 2 queue

#include <iostream>
#include <queue>
using namespace std;

class Stack
{
private:
    queue<int> q1;
    queue<int> q2;

public:
    void push(int data)
    {
        q1.push(data);
    }

    int pop()
    {
        if (q1.empty())
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        while (q1.size() != 1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        int top = q1.front();
        q1.pop();
        swap(q1, q2);
        return top;
    }
};

int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    s.push(4);
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    return 0;
}
