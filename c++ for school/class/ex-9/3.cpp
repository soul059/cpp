// Write a program to demonstrate the use of ‘Rethrowing an Exception’ concept.

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
        throw;
    }
}

int main() {
    try {
        divide(10, 2);
        divide(10, 0);
    } catch (...) {
        cout << "Caught rethrown exception" << endl;
    }
    return 0;
}