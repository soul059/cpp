#include<iostream>
using namespace std;

class A
{
private:
    int a;
public:
    A():a(0){};

    virtual void display() = 0;    
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
class c: public B
{
    public:
        void display(){
        cout<<"derived from b\n";
    }
};


int main(){

    c x;
    A *p = &x;
    p->display();

    return 0;
}



