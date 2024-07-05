#include<iostream>
using namespace std;

int main(){
    cout<<"hello world\n";
    void * x;
    int * y;
    x = y;
    y = (int *)x;

    return 0;
}