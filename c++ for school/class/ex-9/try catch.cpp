#include<iostream>
using namespace  std;

int devision(double x, double y){
    if (y==0)
    {
        throw "Math Error";
    }
    return x/y;
}

int main(){
    double a=1,b=0;
    
    try
    {
        devision(a,b);
    }
    catch(const char *x)
    {
        cerr << x << '\n';
    }
    
    return 0;
}