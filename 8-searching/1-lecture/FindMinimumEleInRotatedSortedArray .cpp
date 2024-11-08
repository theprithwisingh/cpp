#include <iostream>
using namespace std;

int findMinInRotatedArray(int arr[], int n) {
    int low = 0, high = n - 1;
    
    // Edge case: if the array is not rotated (sorted array)
    if (arr[low] <= arr[high]) {
        return arr[low];
    }
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        // Check if mid element is the minimum element
        if (arr[mid] > arr[mid + 1]) {
            return arr[mid + 1];
        }
        if (arr[mid - 1] > arr[mid]) {
            return arr[mid];
        }
        
        // Decide which half to search
        if (arr[mid] >= arr[low]) {
            // Left half is sorted, so the minimum must be in the right half
            low = mid + 1;
        } else {
            // Right half is sorted, so the minimum must be in the left half
            high = mid - 1;
        }
    }
    
    // If we can't find the minimum (which shouldn't happen as the array is rotated)
    return -1;
}

int main() {
    int arr[] = {4, 5, 6, 7, 0, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int minElement = findMinInRotatedArray(arr, n);
    cout << "The minimum element in the rotated array is: " << minElement << endl;
    
    return 0;
}
