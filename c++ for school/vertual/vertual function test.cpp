#include<iostream>
using namespace std;

class A
{
private:
    int a;
public:
    A():a(0){};
    void display(){
        cout<<"base class\n";
    }
    
};

class B: public A
{
private:
    int b;
public:
    B():b(0){};
    void display(){
        cout<<"derived\n";
    }
    
};

int main(){
    B x;
    A *p = &x;
    p->display();
}



