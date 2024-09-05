// simple programe to understand circular linked list in c++

#include <iostream>
using namespace std;
 
class Node
{
public:
    int data;
    Node *next;
};

class CircularLinkedList
{
private:
    Node *head;

public:
    CircularLinkedList()
    {
        head = NULL;
    }

    void addNode(int val)
    {
        Node *newNode = new Node();
        newNode->data = val;
        newNode->next = head;
        Node *temp = head;
        if (head != NULL)
        {
            while (temp->next != head)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        else
        {
            newNode->next = newNode;
        }
        head = newNode;
    }

    void deleteNode(){
        Node *temp = head;
        Node *last = head;
        while(temp->next != head){
            last = temp;
            temp = temp->next;
        }
        last->next = temp->next;
        delete temp;
    }

    void display()
    {
        Node *temp = head;
        if (head != NULL)
        {
            do
            {
                cout << temp->data << " ";
                temp = temp->next;
            } while (temp != head);
        }
    }
};

int main()
{
    CircularLinkedList cl;
    cl.addNode(1);
    cl.addNode(2);
    cl.addNode(3);
    cl.addNode(4);
    cl.display();
    return 0;
}