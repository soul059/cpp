#include<iostream>
using namespace  std;

template <typename T>
string toBinary(T n){
    string r;
    while(n!=0){
        r=(n%2==0 ?"0":"1")+r;
        n/=2;
    }
    return r;
}

int main(){
    cout << toBinary(10)<<endl;
    cout << toBinary('A')<<endl;
    return 0;
}