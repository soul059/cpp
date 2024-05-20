// Write a class template to represent a generic vector. Include member functions to perform the following tasks:
// (a) To create the vector
// (b) To modify the value of a given element
// (c) To multiply by a scalar value
// (d) To display the vector in the following form (10, 20, 30 …)

#include <iostream> 
using namespace std;

template <class T>

class Vector {
    T* arr;
    int size;
public:
    Vector(int n) {
        size = n;
        arr = new T[size];
    }
    void modify(int index, T value) {
        arr[index] = value;
    }
    void multiply(T scalar) {
        for (int i = 0; i < size; i++) {
            arr[i] *= scalar;
        }
    }
    void display() {
        cout << "(";
        for (int i = 0; i < size; i++) {
            cout << arr[i];
            if (i < size - 1) {
                cout << ", ";
            }
        }
        cout << ")" << endl;
    }
};

int main() {
    Vector<int> v1(3);
    v1.modify(0, 10);
    v1.modify(1, 20);
    v1.modify(2, 30);
    v1.display();
    v1.multiply(2);
    v1.display();

    Vector<float> v2(3);
    v2.modify(0, 10.5);
    v2.modify(1, 20.5);
    v2.modify(2, 30.5);
    v2.display();
    v2.multiply(2.5);
    v2.display();

    return 0;
}