// Write a program to demonstrate use of pointer with following concepts:
// • Arithmetic operations on pointers
// • Pointers with Arrays & Arrays of Pointers
// • Pointers to functions
// • Array of Pointers to Objects

#include<iostream>
using namespace std;

int main()
{
    //arithmatic operations on pointers
    int a = 10;
    int *p = &a;

    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Value of p: " << p << endl;
    cout << "Address of p: " << &p << endl;
    cout << "Value of *p: " << *p << endl;

    p++;
    cout << "Value of p after increment: " << p << endl;

    p--;
    cout << "Value of p after decrement: " << p << endl;

    //pointers with arrays

    int arr[5] = {1, 2, 3, 4, 5};
    int *q = arr;

    cout << "Value of arr[0]: " << arr[0] << endl;
    cout << "Address of arr[0]: " << &arr[0] << endl;
    cout << "Value of q: " << q << endl;
    cout << "Address of q: " << &q << endl;
    cout << "Value of *q: " << *q << endl;

    q++;
    cout << "Value of q after increment: " << q << endl;

    q--;
    cout << "Value of q after decrement: " << q << endl;

    //arrays of pointers

    int *arr1[5];
    int b = 10;
    int c = 20;
    int d = 30;
    int e = 40;
    int f = 50;

    arr1[0] = &b;
    arr1[1] = &c;
    arr1[2] = &d;
    arr1[3] = &e;
    arr1[4] = &f;

    cout << "Value of b: " << b << endl;
    cout << "Address of b: " << &b << endl;

    cout << "Value of c: " << c << endl;
    cout << "Address of c: " << &c << endl;

    cout << "Value of d: " << d << endl;
    cout << "Address of d: " << &d << endl;

    cout << "Value of e: " << e << endl;
    cout << "Address of e: " << &e << endl;

    cout << "Value of f: " << f << endl;
    cout << "Address of f: " << &f << endl;

    cout << "Value of arr1[0]: " << arr1[0] << endl;
    cout << "Address of arr1[0]: " << &arr1[0] << endl;

    cout << "Value of arr1[1]: " << arr1[1] << endl;
    cout << "Address of arr1[1]: " << &arr1[1] << endl;

    cout << "Value of arr1[2]: " << arr1[2] << endl;
    cout << "Address of arr1[2]: " << &arr1[2] << endl;

    cout << "Value of arr1[3]: " << arr1[3] << endl;
    cout << "Address of arr1[3]: " << &arr1[3] << endl;

    cout << "Value of arr1[4]: " << arr1[4] << endl;
    cout << "Address of arr1[4]: " << &arr1[4] << endl;




    return 0;
}