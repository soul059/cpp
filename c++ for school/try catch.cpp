#include<iostream>
using namespace  std;


int main(){
    int a=1,b=0;
    try
    {
        if (b==0)
        {
            throw "this is wrong input";
        }
        else{
            cout<<a/b<<endl;
        }
        
    }
    catch(const char *x)
    {
        cerr << x << '\n';
    }
    
    return 0;
}