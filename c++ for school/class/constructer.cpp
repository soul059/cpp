#include<iostream>
using namespace  std;

class test
{
private:
    int a;
    int b;
public:
    test(int x,int y){
        a=x;
        b=y;
        cout<<"a is : "<<a<<endl;
        cout<<"b is : "<<b<<endl;
    }
    test(test &x){
        a=x.a;
        b=x.b;
        cout<<"a is : "<<a<<endl;
        cout<<"b is : "<<b<<endl;
    }
    ~test(){
        cout<<"Destructor called"<<a<<endl;
    }
};

int main(){
    test t(10,20);
    test t1(t);
    test t2 = t;
    {

        test t3 = {1,2};
        test t4 = t3;
    }
    return 0;
}

