#include<iostream>
#include<vector>
#include<algorithm>
using namespace  std;

int fibo1(int n){
    if(n<= 1) return n;

    return fibo1(n-1) + fibo1(n-2);
}

void fibo2(int n){
    int a=0,b=1,c;
    cout<<a<<"\t"<<b<<"\t";
    
    for(int i=3;i<=n;i++)
    {
        c = a+b;
        a=b;
        b=c;
        cout<<c<<"\t";
    }
}

int main(){
    int n;
    cout<<"how many turm wnat in fibonacci siris: ";
    cin>>n;
    fibo2(n);
    cout<<endl;
    for(int i=0;i<=n;i++){
        cout<<fibo1(i)<<"\t";
    }

    return 0;
}