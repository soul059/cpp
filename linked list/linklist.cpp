#include <iostream>

// Node class
class Node {
public:
    int data;
    Node* next;
};

// Linked list class
class LinkedList {
private:
    Node* head;

public:
    // Constructor
    LinkedList() {
        head = nullptr;
    }

    // Function to insert a node at the beginning of the linked list
    void insert(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }

    // Function to display the linked list
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }

    void Insertafter(int value, int pos) {
        Node* newNode = new Node();
        newNode->data = value;
        Node* temp = head;
        for (int i = 0; i < pos - 1; i++) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void Insertbefore(int value, int pos) {
        Node* newNode = new Node();
        newNode->data = value;
        Node* temp = head;
        for (int i = 0; i < pos - 2; i++) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void Delete(int pos) {
        Node* temp = head;
        for (int i = 0; i < pos - 2; i++) {
            temp = temp->next;
        }
        Node* temp1 = temp->next;
        temp->next = temp1->next;
        delete temp1;
    }

    void DeleteFirst() {
        Node* temp = head;
        head = temp->next;
        delete temp;
    }

    void Deleteafter(int pos) {
        Node* temp = head;
        for (int i = 0; i < pos - 1; i++) {
            temp = temp->next;
        }
        Node* temp1 = temp->next;
        temp->next = temp1->next;
        delete temp1;
    }

    void Deletebefore(int pos) {
        Node* temp = head;
        for (int i = 0; i < pos - 3; i++) {
            temp = temp->next;
        }
        Node* temp1 = temp->next;
        temp->next = temp1->next;
        delete temp1;
    }

    void Deletelast() {
        Node* temp = head;
        while (temp->next->next != nullptr) {
            temp = temp->next;
        }
        Node* temp1 = temp->next;
        temp->next = nullptr;
        delete temp1;
    }

    // Function to reverse the linked list
    void reverse() {
        Node* prev = nullptr;
        Node* current = head;
        Node* next = nullptr;

        while (current != nullptr) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }

        head = prev;
    }
};

// Main function
int main() {
    LinkedList list;

    // Inserting elements into the linked list
    list.insert(5);
    list.insert(10);
    list.insert(15);

    // Displaying the linked list
    list.display();
    list.reverse();
    list.display();
    list.Insertafter(20, 2);
    list.display();

    return 0;
}