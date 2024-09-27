#include<iostream>
using namespace  std;

int partition(int arr[],int low,int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i<j){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}

void qs(int arr[],int low,int high){
    if(low<high){
        int pi=partition(arr,low,high);
        qs(arr,low,pi-1);
        qs(arr,pi+1,high);
    }
}

int main(){
    int n;
    cin >> n;
    cout<<"enter array";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"\narray before sorting\n";
    qs(arr,0,n-1);
    cout<<"\narray after sorting\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}