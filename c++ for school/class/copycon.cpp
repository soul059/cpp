//add two object numbers using copy constructor

#include <iostream>
using namespace std;

class Number
{
private:
    int num;

public:
    Number()
    {
        num = 0;
    }
    Number(int n)
    {
        num = n;
    }
    Number(Number &n)
    {
        cout << "Copy constructor called" << endl;
        num = n.num;
    }
    void display()
    {
        cout << "The number is: " << num << endl;
    }
    Number operator+(Number n);
    Number operator=(Number n);
    ~Number()
    {
        cout << "Destructor called" << endl;
    }
};

Number Number::operator+(Number n)
{
    Number temp;
    temp.num = num + n.num;
    return temp;
}

Number Number::operator=(Number n)
{
    cout << "Assignment operator called" << endl;
    num = n.num;
    return *this;
}

int main()
{
    Number n1(10), n2(20), n3;
    n3 = n1 + n2;
    n3.display();
    return 0;
}