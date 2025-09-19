#include <iostream>
#include <vector>
using namespace std;

void printSubarrays(vector<int>& arr, int subSize) {
    int n = arr.size();
    cout << "Subarrays of size " << subSize << ":\n";

    for (int i = 0; i <= n - subSize; i++) {
        cout << "[ ";
        for (int j = i; j < i + subSize; j++) {
            cout << arr[j] << " ";
        }
        cout << "]\n";
    }

    cout << "-------------------------\n";
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

    // Subarrays of size 1, 2, and 3
    printSubarrays(arr, 1);
    printSubarrays(arr, 2);
    printSubarrays(arr, 3);

    return 0;
}
