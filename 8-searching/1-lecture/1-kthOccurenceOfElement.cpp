#include <iostream>
using namespace std;

// Function to find the first occurrence of the target using binary search
int findFirstOccurrence(int arr[], int n, int target) {
  int low = 0, high = n - 1;
  int firstOccurrence = -1;

  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (arr[mid] == target) {
      firstOccurrence = mid; // Update first occurrence
      high = mid - 1; // Search in the left half to find earlier occurrence
    } else if (arr[mid] < target) {
      low = mid + 1; // Search in the right half
    } else {
      high = mid - 1; // Search in the left half
    }
  }

  return firstOccurrence;
}

int findKthOccurrence(int arr[], int n, int target, int k) {
  // Step 1: Find the first occurrence of the target
  int firstOccurrence = findFirstOccurrence(arr, n, target);

  if (firstOccurrence == -1) {
    return -1; // Target not found in the array
  }

  // Step 2: Traverse from the first occurrence and count occurrences
  int count = 1; // First occurrence is already found
  for (int i = firstOccurrence + 1; i < n; i++) {
    if (arr[i] == target) {
      count++;
    }

    if (count == k) {
      return i; // Return the index of the k-th occurrence
    }
  }

  // If we don't find the k-th occurrence
  return -1;
}

int main() {
  int arr[] = {1, 2, 2, 3, 3, 4, 4, 4, 4, 5, 5, 5, 7}; // Sorted array
  int n = sizeof(arr) / sizeof(arr[0]);

  int target = 4; // Element whose k-th occurrence we are looking for
  int k = 3;      // Looking for the 3rd occurrence

  int index = findKthOccurrence(arr, n, target, k);

  if (index != -1) {
    cout << "The " << k << "-th occurrence of " << target
         << " is at index: " << index << endl;
  } else {
    cout << target << " does not occur " << k << " times in the array." << endl;
  }

  return 0;
}
