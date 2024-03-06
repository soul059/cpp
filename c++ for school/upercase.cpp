#include<iostream>

using namespace std;

void changeStr(string str){
    for ( int i = 0; i <int(str.length()); i++)
    {
        cout<<i;
    }
    
}

int main(){
    changeStr("keval");
    return 0;
}