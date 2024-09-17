#include <iostream>
using namespace std;

int main() {
    int arr[5] = {4, 5, 6, 7, 8};  // Original array

    // Use a for loop with two pointers: i (start) and j (end)
    for (int i = 0, j = 4; i < j; i++, j--) {
        // Swap arr[i] with arr[j]
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    // Print the reversed array
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
