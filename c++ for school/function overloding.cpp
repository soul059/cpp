#include<iostream>
using namespace  std;

int fun(int a,int b){
    return a+b;
}
// this will show an error (ambiguating error) because it conevert int to float (4 -> 4.0) so it will confiud

// float fun(int a,int b){
//     return a+b;
// }

float fun(float a,float b){
    return a+b;
}

int main(){
    int a=1,b=2,A;
    float c=4.4,d=4.4,B,C;

    A = fun(a,b);
    B = fun(c,d);
    // C = fun(a,b);
    cout<<A<<'\n'<<B<<'\n';


    // cout<<fun(4,5)<<endl;
    // cout<<fun(float(4.44),float(4.44));
    return 0;
}