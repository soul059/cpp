#include <iostream>
using namespace std;

class MyClass {
    private:
        int privateVar;
    public:
        MyClass() {
            privateVar = 10;
        }
        friend void friendFunction(MyClass& obj);
};

void friendFunction(MyClass& obj) {
    cout << "Private Variable: " << obj.privateVar << endl;
}

int main() {
    MyClass object1;
    friendFunction(object1);
    return 0;
}
