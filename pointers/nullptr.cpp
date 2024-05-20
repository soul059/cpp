#include<iostream>
using namespace  std;

void printValue(int* ptr) {
    if (ptr != nullptr) {
        cout << "Value: " << *ptr << endl;
    } else {
        cout << "Null pointer!" << endl;
    }
}
void printValue(int ptr) {
    
        cout << "int"<<ptr << endl;

}

int main(){
    int *p = nullptr; // nullptr is a keyword in C++ which is used in place of NULL. nullptr is a pointer that is guaranteed to compare unequal to any valid pointer.
    //printValue(NULL);
    //it will give an error because NULL is a macro that is defined as 0. It is not a pointer.
    // because of this, the compiler will not be able to determine which function to call.
    printValue(p);//thats why we use nullptr
    return 0;
}