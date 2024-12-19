#include <iostream>
#include <cstdlib> 
#include <ctime>

using namespace std;

int randomnum(){
    srand(time(0));
    int randomNum = rand() %10001;

    return randomNum;
}

int linearS(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}
int j=0;
int linearI(int arr[],int n,int key){
    if(j == n-1) return -1;
    if(arr[j] == key) j;
    j++;

    return linearI(arr,n,key);
    
}

int main() {
    int n,key;
    cout<<"enter size: ";
    cin>>n;
    cout<<"enter key: ";
    cin>>key;
    int arr[n];
    for(int i =0;i<n;i++){
        arr[i] = randomnum();
    }
    int x = linearS(arr,n,key);
    cout<<"index is: "<<x<<endl;

    return 0;
}
