#include<iostream>
#include<string>
using namespace  std;

// ... is used to define variadic templates.

template<typename T>

void func(T value){
    cout << value << endl;
}

template<typename T, typename... Args>// args = arguments

void func(T first, Args... args){
    cout << first << endl;
    func(args...);
}


int main(){
    
    func(1, 2.5, "Hello", 5.5f);//f is used to define float value.

    return 0;
}