#include<iostream>
using namespace  std;

template <typename T> // it is used to create a template. It is used to create a generic function.
// T is a placeholder type. It will be replaced by the actual data type when the function is called.
// you can also use class instead of typename.
// you can also use multiple placeholder types.

T add(T a, T b){
    return a + b;
}

int main(){
    int x = 5;
    int y = 10;
    cout << add(x, y) << endl;

    return 0;
}