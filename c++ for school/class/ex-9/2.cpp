// Write a program that can throw integer, char and double exceptions in the same try block. Implement respective exception handling (multiple and single catch mechanism).

#include <iostream>
using namespace std;

void throw_exception(int n) {
    if (n == 1) {
        throw 1;
    } else if (n == 2) {
        throw 'a';
    } else if (n == 3) {
        throw 3.14;
    }
}

int main() {
    try {
        throw_exception(1);
    } catch (int n) {
        cout << "Caught integer exception: " << n << endl;
    } catch (char c) {
        cout << "Caught char exception: " << c << endl;
    } catch (double d) {
        cout << "Caught double exception: " << d << endl;
    }
    return 0;
}
