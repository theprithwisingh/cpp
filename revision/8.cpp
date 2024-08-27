#include <iostream>
#include <vector>
using namespace std;

// Bubble Sort function
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    if (n < 2) {
        cout << "There are no pairs because there are less than 2 elements." << endl;
        return 0;
    }

    int x;
    cout << "Enter the target sum: ";
    cin >> x;
    
    vector<int> v(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << "Array: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // Sort the array using Bubble Sort
    bubbleSort(v);

    int left = 0;
    int right = n - 1;
    bool flag = false;

    while (left < right) {
        int sum = v[left] + v[right];
        if (sum == x) {
            cout << "Pair found: " << v[left] << " and " << v[right] << endl;
            flag = true;
            break; // Exit after finding the first pair
        } else if (sum < x) {
            left++; // Move left pointer to the right
        } else {
            right--; // Move right pointer to the left
        }
    }

    if (!flag) {
        cout << "No pair found." << endl;
    }

    return 0;
}
