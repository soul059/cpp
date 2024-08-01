// implemntance of stack by linked list

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class Stack
{
private:
    Node *top;

public:
    Stack()
    {
        top = nullptr;
    }

    void push(int value)
    {
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = top;
        top = newNode;
    }

    void pop()
    {
        if (top == nullptr)
        {
            cout << "Stack is empty" << endl;
            return;
        }
        Node *temp = top;
        top = top->next;
        delete temp;
    }

    void display()
    {
        Node *temp = top;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.display();
    s.pop();
    s.display();
    s.pop();
    s.display();
    s.pop();
    s.display();
    s.pop();
    return 0;
}
