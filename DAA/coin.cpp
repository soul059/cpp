#include<iostream>
#include<vector>
#include<algorithm>
using namespace  std;

int getNoOfcoin(int arr[],int need){
    int count = 0;
    int i = 3;
    while(need != 0 && i >= 0){
        if(need >= arr[i]){
            count += need / arr[i];
            need = need % arr[i];
        }
        i--;
    }

    return count;
}

int main(){
    int val;
    cin>> val;
    int coin[4] = {1,2,5,10};

    cout<< getNoOfcoin(coin,val)<<endl;
    return 0;
}