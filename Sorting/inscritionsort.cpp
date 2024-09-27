#include<iostream>
using namespace  std;

void itrateIncertionsort(int arr[],int n){
    for (int i = 0; i < n ; i++)
    {
        int j = i + 1;
        while(j > 0 && arr[j] < arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }

}

void Is(int arr[],int low,int high){
    if(low < high){
        int j = low + 1;
        while(j > 0 && arr[j] < arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
        Is(arr,low+1,high);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) cin>>arr[i];
    Is(arr,0,n-1);
    for (int i = 0; i < n; i++) cout<<arr[i]<<" ";
    return 0;
}

