// Write a program to implement Bubble Sort using template functions.

#include <iostream>
using namespace std;

template <class T>
void bubbleSort(T arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr1[] = {64, 34, 25, 12, 22, 11, 90};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    bubbleSort(arr1, n1);
    cout << "Sorted array: ";
    for (int i = 0; i < n1; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    float arr2[] = {64.3, 34.2, 25.1, 12.5, 22.4, 11.9, 90.7};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    bubbleSort(arr2, n2);
    cout << "Sorted array: ";
    for (int i = 0; i < n2; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    return 0;
}