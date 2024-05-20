// Write a program to read a list containing item name, item code, and cost interactively and produce a three column output as shown below:
// NAME        CODE    COST
// Turbo C++   1001    250.95
// C++ Primer  905     95.70
// ……….        …..     ……….

#include <iostream>
#include <iomanip>
using namespace std;

class Item {
    string name;
    int code;
    float cost;
public:
    void read() {
        cout << "Enter item name: ";
        cin >> name;
        cout << "Enter item code: ";
        cin >> code;
        cout << "Enter cost: ";
        cin >> cost;
    }
    void display() {
        cout << setw(15) << name << setw(8) << code << setw(8) << cost << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of items: ";
    cin >> n;
    Item items[n];
    for (int i = 0; i < n; i++) {
        items[i].read();
    }
    cout << setw(15) << "NAME" << setw(8) << "CODE" << setw(8) << "COST" << endl;
    for (int i = 0; i < n; i++) {
        items[i].display();
    }
    return 0;
}