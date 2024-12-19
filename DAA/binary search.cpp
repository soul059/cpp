#include <iostream>
#include <cstdlib> 
#include <ctime>
#include <algorithm>

using namespace std;

int randomnum(){
    srand(time(0));
    int randomNum = rand() %10001;

    return randomNum;
}

int binaryS(int arr[],int n,int key){
    int low = 0,high = n-1;
    while(low<=high){
        int mid = (low + high)/2;
        if(arr[mid] == key ) return mid;
        else if(arr[mid] <= key) low = mid+1;
        else{
            high = mid-1;
        }
        
    }
    return -1;
}
int j=0;
int binaryI(int arr[],int low,int high,int key){
    if(low>high) return -1;
    int mid = (low+high)/2;
    if(arr[mid] == key) return mid;
    else if (arr[mid]<=key)
    {
        return binaryI(arr,mid+1,high,key);
    }
    return binaryI(arr,low,high-1,key); 
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
    sort(arr,arr +n);
    int x = binaryS(arr,n,key);
    cout<<"index is: "<<x<<endl;

    return 0;
}
