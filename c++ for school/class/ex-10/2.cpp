// Write a program which overloads template function with explicit function.

#include <iostream>
using namespace std;

template <class T>
void print(T value) {
    cout << value << endl;
}

void print(int value) {
    cout << "Integer: " << value << endl;
}

int main() {
    print(10);
    print(10.5);
    print("Hello");
    return 0;
}