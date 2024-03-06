// function overhesad (function calling and returning some value)

#include <iostream>
using namespace std;

inline int sum(int a, int b)
{
    for (int i = 0; i < 5; i++)
    {
        cout << b << endl;
    }
    return a + b;
}

int main()
{
    cout << sum(4, 3) << endl;
    return 0;
}