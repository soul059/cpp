//simple program to understand doubly linked list in c++

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
};

class DoublyLinkedList
{
private:
    Node *head;

public:
    DoublyLinkedList()
    {
        head = NULL;
    }

    void addNode(int val)
    {
        Node *newNode = new Node();
        newNode->data = val;
        newNode->next = NULL;
        newNode->prev = NULL;
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->prev = temp;
        }
    }

    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};

int main()
{
    DoublyLinkedList dll;
    dll.addNode(1);
    dll.addNode(2);
    dll.addNode(3);
    dll.addNode(4);
    dll.display();
    return 0;
}