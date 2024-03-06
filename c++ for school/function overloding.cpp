#include<iostream>
using namespace  std;

// this will show an error (ambiguating error) because it conevert int to float (4 -> 4.0) so it will confiud

int fun(int a,int b){
    cout<<"@1@\n";
    return a+b;
}
float fun(float a,int b){
        cout<<"@2@\n";

    return a+b;
}

float fun(float a,float b){
        cout<<"@3@\n";

    return a+b;
}

int main(){
    int a=1,b=2,A,D,E;
    float c=4.9,d=4.4,B,C;

    A = fun(a,b);
    B = fun(c,d);
    C = fun(c,b);
    D = fun(c,b);
    E = fun(float(4.44),float(4.44));
    cout<<A<<'\n'<<B<<'\n'<<C<<'\n'<<D<<'\n'<<E<<endl;



    // cout<<fun(4,5)<<endl;
    // cout<<fun(float(4.44),float(4.44));
    return 0;
}