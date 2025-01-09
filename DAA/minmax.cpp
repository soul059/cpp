#include <iostream>
#include <vector>
#include <limits.h>


void findMinMaxIterative(const std::vector<int>& arr, int& min, int& max) {
    min = INT_MAX;
    max = INT_MIN;
    for (int num : arr) {
        if (num < min) min = num;
        if (num > max) max = num;
    }
}


void findMinMaxRecursiveDecreasing(const std::vector<int>& arr, int n, int& min, int& max) {
    if (n == 1) {
        min = max = arr[0];
        return;
    }
    findMinMaxRecursiveDecreasing(arr, n - 1, min, max);
    if (arr[n - 1] < min) min = arr[n - 1];
    if (arr[n - 1] > max) max = arr[n - 1];
}

void findMinMaxRecursiveDividing(const std::vector<int>& arr, int low, int high, int& min, int& max) {
    if (low == high) {
        min = max = arr[low];
        return;
    }
    if (high == low + 1) {
        if (arr[low] < arr[high]) {
            min = arr[low];
            max = arr[high];
        } else {
            min = arr[high];
            max = arr[low];
        }
        return;
    }
    int mid = (low + high) / 2;
    int min1, max1, min2, max2;
    findMinMaxRecursiveDividing(arr, low, mid, min1, max1);
    findMinMaxRecursiveDividing(arr, mid + 1, high, min2, max2);
    min = (min1 < min2) ? min1 : min2;
    max = (max1 > max2) ? max1 : max2;
}

int main() {
    std::vector<int> arr = {3, 5, 1, 8, 2, 7, 6, 4};
    int min, max;

    findMinMaxIterative(arr, min, max);
    std::cout << "Iterative approach: Min = " << min << ", Max = " << max << std::endl;

    findMinMaxRecursiveDecreasing(arr, arr.size(), min, max);
    std::cout << "Recursive decreasing approach: Min = " << min << ", Max = " << max << std::endl;

    findMinMaxRecursiveDividing(arr, 0, arr.size() - 1, min, max);
    std::cout << "Recursive dividing approach: Min = " << min << ", Max = " << max << std::endl;

    return 0;
}