#include<iostream>
using namespace  std;

#define PI 3.14159 // Macros are used to define constants.
// #define is used to define the constant value.
//it will use in comiler making.

#define AREA_CIRCLE(r) (PI * r * r) // Macros are used to define functions.

int main(){
    float radius = 5.0;
    cout << "Area of circle: " << AREA_CIRCLE(radius) << endl;

    return 0;
}