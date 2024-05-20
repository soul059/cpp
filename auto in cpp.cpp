#include<iostream>
using namespace  std;

auto apiResponse(){
    return "API Response";
}

int main(){
    auto a = apiResponse(); // auto keyword is used to automatically determine the data type of the variable.
    cout << a << endl;

    return 0;
}