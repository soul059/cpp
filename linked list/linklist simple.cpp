#include<iostream>
using namespace  std;

class Node
{
private:
    int data;
    Node* link;
public:
    Node(int data){
        this->data = data;
        this->link = nullptr;
    }

    friend class LinkedList;

};

class LinkedList{
private:
    Node* head;
    Node* tail;

public:
    LinkedList(){
        head = nullptr;
        tail = nullptr;
    }

    void insert(int value){
        Node* newNode = new Node(value);
        if(head == nullptr){
            head = newNode;
            tail = newNode;
        }
        else{
            tail->link = newNode;
            tail = newNode;
        }
    }

    void display(){
        Node* temp = head;
        while(temp != nullptr){
            cout << temp->data << " ";
            temp = temp->link;
        }
        cout << endl;
    }

    void InsertAfter(int value, int data){
        Node* newNode = new Node(value);
        Node* temp = head;
        while (temp->data != data)
        {
            temp = temp->link;
        }
        
        newNode->link = temp->link;
        temp->link = newNode;
    }

    void InsertBefore(int value , int data){
        node* newNode = new Node(value);
        Node* temp = head;
        while (temp->link->data != data)
        {
            temp = temp->link;
        }
        newNode->link = temp->link;
        temp->link = newNode;
    }

    void DeleteAfter(int data){
        Node* temp = head;
        while (temp->data != data)
        {
            temp = temp->link;
        }
        Node* toDelete = temp->link;
        temp->link = temp->link->link;
        delete toDelete;
    }

    void Delete(int data){
        Node* temp = head;
        if(head->data == data){
            Node* toDelete = head;
            head = head->link;
            delete toDelete;
            return;
        }
        while (temp->link->data != data)
        {
            temp = temp->link;
        }
        Node* toDelete = temp->link;
        temp->link = temp->link->link;
        delete toDelete;
    }

    void DeleteBefore(int data){
        Node* temp = head;
        if(head->link->data == data){
            Node* toDelete = head;
            head = head->link;
            delete toDelete;
            return;
        }
        while (temp->link->link->data != data)
        {
            temp = temp->link;
        }
        Node* toDelete = temp->link;
        temp->link = temp->link->link;
        delete toDelete;
    }

    void reverse(){
        Node* prev = nullptr;
        Node* current = head;
        Node* next = nullptr;
        while(current != nullptr){
            next = current->link;
            current->link = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }

    ~LinkedList(){
        Node* temp = head;
        while(temp != nullptr){
            Node* next = temp->link;
            delete temp;
            temp = next;
        }
    }
};




int main(){
    LinkedList list;

    list.insert(5);
    list.insert(10);
    list.insert(15);

    list.display();
    list.reverse();
    list.display();

    list.Insertafter(20, 10);
    list.display();
    return 0;
}