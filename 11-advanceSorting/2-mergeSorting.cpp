#include <iostream>
using namespace std;

void merge(int *arr, int start, int end) {
    int mid = (start + end) / 2;
    int len1 = mid - start + 1;
    int len2 = end - mid;

    // Create temporary arrays
    int *first = new int[len1];
    int *second = new int[len2];

    // Copy values to the temporary arrays
    int mainArrayIndex = start;
    for (int i = 0; i < len1; i++) {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++) {
        second[i] = arr[mainArrayIndex++];
    }

    // Merge the two sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = start;

    while (index1 < len1 && index2 < len2) {
        if (first[index1] <= second[index2]) {
            arr[mainArrayIndex++] = first[index1++];
        } else {
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    // Copy any remaining elements of first[]
    while (index1 < len1) {
        arr[mainArrayIndex++] = first[index1++];
    }

    // Copy any remaining elements of second[]
    while (index2 < len2) {
        arr[mainArrayIndex++] = second[index2++];
    }

    // Free memory of temporary arrays
    delete[] first;
    delete[] second;
}

void mergeSort(int *arr, int start, int end) {
    // Base case
    if (start >= end) {
        return;
    }

    int mid = (start + end) / 2;

    // Sort the left part
    mergeSort(arr, start, mid);

    // Sort the right part
    mergeSort(arr, mid + 1, end);

    // Merge the sorted parts
    merge(arr, start, end);
}

int main() {
    int arr[] = {38, 27, 43,23,45, 3, 9, 82, 10,100,103,344,567,879};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
