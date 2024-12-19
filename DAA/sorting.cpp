#include<iostream>
#include<vector>
#include<algorithm>
#include <cstdlib> 
#include <ctime>
using namespace  std;

void printarr(int arr[],int n){
    for(int x=0;x<n;x++){
        cout<<arr[x]<<" ";
    }
    cout<<endl;
}

void selectionSort(int arr[], int n){
    for (int i = 0; i < n-1; i++)
    {
        int min = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            } 
        }
        if(min == i) continue;
        swap(arr[i],arr[min]);
        // printarr(arr,n);
        
    }
    printarr(arr,n);
        cout<<endl;
}


void insertionSort(int arr[], int n){
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
        // printarr(arr,n);
    }
    printarr(arr,n);
        cout<<endl;
}

void bubbleSort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j =0;j<n-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[i]);
            }
            // printarr(arr,n);
            
        }
    }
    printarr(arr,n);
    cout<<endl;
}

int randomnum(int n){
    int randomNum;
    int sum;
    for(int i=1;i<n;i++){
        srand(time(0));
        randomNum = rand() %i;
        sum += randomNum;

    }

    return randomNum;
}

int main(){
    int n;
    cin>>n;
    int a[n],b[n],c[n];
    
        srand(time(0));
    for(int i = 0;i<n;i++){
        a[i]= rand()% 100001;
        b[i]=a[i];
        c[i]=a[i];
    }

    selectionSort(a,n);
    insertionSort(b,n);
    bubbleSort(c,n);

    return 0;
}