#include <iostream>
using namespace std;

class Static
{
private:
    static int count;
public:
    static void setCount(int c)
    {
        count = c;
    }
    static int getCount()
    {   
        count++;
        return count;
    }
};

// Define the static variable 'count'
int Static::count = 0;

int main()
{
    Static::setCount(5);
    cout << Static::getCount()<<endl;
    cout << Static::getCount()<<endl;
    cout << Static::getCount()<<endl;

    return 0;
}
