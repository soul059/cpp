#include<iostream>

using namespace std;
void swapTwo(int &a,int &b){
    int temp = a;
    a=b;
    b=temp;
}

int main(){
    int x,y;
    cin>>x>>y;
    swapTwo(x,y);
    cout<<x<<y;
    return 0;
}
