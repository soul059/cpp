#include<iostream>
using namespace  std;

enum day {mon, tue, wed, thu, fri, sat, sun}; // Enumerated data type means that it will give a name to the integer values. Here, mon = 0, tue = 1, wed = 2, thu = 3, fri = 4, sat = 5, sun = 6.

int main(){
    day d;
    d = sat;
    cout << d << endl;
    
    return 0;
}