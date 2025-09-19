#include<iostream>
using namespace std;

int partition(int arr[], int startIdx, int endIdx) {
    int pivotElement = arr[startIdx];
    int count = 0;
    
    // Count how many elements are less than or equal to the pivot
    for (int i = startIdx + 1; i <= endIdx; i++) {
        if (arr[i] <= pivotElement) count++;
    }
    
    // Place pivot element in the correct position
    int pivotIdx = startIdx + count;
    swap(arr[startIdx], arr[pivotIdx]);
    
    // Now partition the array around the pivot element
    int i = startIdx;
    int j = endIdx;
    
    while (i < pivotIdx && j > pivotIdx) {
        while (arr[i] <= pivotElement) i++;
        while (arr[j] > pivotElement) j--;
        
        if (i < pivotIdx && j > pivotIdx) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    
    return pivotIdx;
}

void quicksort(int arr[], int startIdx, int endIdx) {
    if (startIdx >= endIdx) return;
    
    int pi = partition(arr, startIdx, endIdx);
    quicksort(arr, startIdx, pi - 1);
    quicksort(arr, pi + 1, endIdx);
}

int main() {
    int arr[] = {5, 1, 8, 5, 7, 6, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Unsorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    quicksort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
