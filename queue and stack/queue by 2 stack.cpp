//make an queue by 2 stack

#include <iostream>
#include <stack>
using namespace std;

class Queue
{
private:
    stack<int> s1;
    stack<int> s2;

public:
    void enqueue(int data)
    {
        s1.push(data);
    }

    int dequeue()
    {
        if (s1.empty() && s2.empty())
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int top = s2.top();
        s2.pop();
        return top;
    }
};

int main()
{
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    q.enqueue(4);
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    return 0;
}