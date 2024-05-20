
#include <iostream>
using namespace std;

class Base
{
public:
    void display()
    {
        cout << "Display function of Base class" << endl;
    }

    virtual void show()
    {
        cout << "Show function of Base class" << endl;
    }
};

class Derived : public Base
{
public:
    void display()
    {
        cout << "Display function of Derived class" << endl;
    }

    void show()
    {
        cout << "Show function of Derived class" << endl;
    }
};

int main()
{
    // Base b;
    // Derived d;

    // b.display();
    // b.show();

    // d.display();
    // d.show();

    Derived d;

    Base *b = &d;

    b = &d;

    b->display();
    b->show();



    return 0;
}