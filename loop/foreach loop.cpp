#include<iostream>
using namespace  std;
int main(){
    int n[10] = {1,2,3,4,5,6,7,8,9,10};
    for(int i : n){
        cout << i << endl;
    }
    
    return 0;
}