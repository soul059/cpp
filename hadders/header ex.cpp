#include<iostream>
#include "header.h"
using namespace  std;

int main(){
    int x = 5;
    int y = 10;
    cout << add(x, y) << endl;
    cout << subtract(x, y) << endl;
    cout << multiply(x, y) << endl;
    cout << divide(x, y) << endl;    
    return 0;
}