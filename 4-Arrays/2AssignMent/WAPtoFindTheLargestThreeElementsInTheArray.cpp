#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 3, 21, 3,23};
    int max, max2, max3;
    max3 = max = max2 = arr[0];

    for (int i = 0; i < 5; i++) {
        if (arr[i] > max) {
            max3 = max2;
            max2 = max;
            max = arr[i];
        } else if (arr[i] > max2) {
            max3 = max2;
            max2 = arr[i];
        } else if (arr[i] > max3) {
            max3 = arr[i];
        }
    }

    cout << endl << "The three largest elements of the array are: " << max << ", " << max2 << ", " << max3 << endl;
    return 0;
}
