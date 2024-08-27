#include <iostream>
#include <algorithm>
using namespace std;

int singleNum(int arr[], int size) {
    sort(arr, arr + size);
    for (int i = 1; i < size; i++) {
        if (arr[i] == arr[i - 1]) {
            arr[i];
        }
    }
    // return -1;
}

// Driver function
int main() {
    int arr[6] = {4, 2, 1, 3, 1, 4};
    int singleNumber = singleNum(arr, 6);
    cout << "Repeating number: " << singleNumber << endl;
    return 0;
}
