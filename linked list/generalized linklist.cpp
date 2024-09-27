#include <iostream>
#include <vector>

template <typename T>
class Node {
public:
    T data;
    Node* next;

    Node(T data) : data(data), next(nullptr) {}
};

template <typename T>
class LinkedList {
private:
    Node<T>* head;

public:
    LinkedList() : head(nullptr) {}

    void insert(T data) {
        Node<T>* newNode = new Node<T>(data);
        if (!head) {
            head = newNode;
        } else {
            Node<T>* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void display() const {
        Node<T>* temp = head;
        while (temp) {
            std::cout << temp->data << " -> ";
            temp = temp->next;
        }
        std::cout << "nullptr" << std::endl;
    }

    ~LinkedList() {
        Node<T>* temp;
        while (head) {
            temp = head;
            head = head->next;
            delete temp;
        }
    }
};

// Example usage for a polynomial
class PolynomialTerm {
public:
    int coefficient;
    int exponent;

    PolynomialTerm(int coeff, int exp) : coefficient(coeff), exponent(exp) {}

    friend std::ostream& operator<<(std::ostream& os, const PolynomialTerm& term) {
        os << term.coefficient << "x^" << term.exponent;
        return os;
    }
};

int main() {
    LinkedList<PolynomialTerm> polynomial;
    polynomial.insert(PolynomialTerm(3, 2));
    polynomial.insert(PolynomialTerm(5, 1));
    polynomial.insert(PolynomialTerm(2, 0));

    std::cout << "Polynomial: ";
    polynomial.display();

    return 0;
}