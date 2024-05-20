// Write a program that has divide() function which throws and catches division by zero exception.

#include <iostream>
using namespace std;

void divide(int a, int b) {
    try {
        if (b == 0) {
            throw "Division by zero";
        }
        cout << "Result: " << a / b << endl;
    } catch (const char* msg) {
        cout << "Error: " << msg << endl;
    }
}

int main() {
    divide(10, 2);
    divide(10, 0);
    return 0;
}