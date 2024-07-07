#include <iostream>

using namespace std;

// Function to compute the sum of the rectangle from (l1, r1) to (l2, r2)
int rectangleSum(int** A, int l1, int r1, int l2, int r2) {
    int sum = 0;
    for (int i = l1; i <= l2; ++i) {
        for (int j = r1; j <= r2; ++j) {
            sum += A[i][j];
        }
    }
    return sum;
}

int main() {
    // Define dimensions
    const int n = 4;
    const int m = 4;

    // Create a sample 2D array
    int A[n][m] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    // Coordinates of the rectangle
    int l1 = 1, r1 = 1, l2 = 2, r2 = 2;

    // Compute and print the sum of the rectangle
    int sum = rectangleSum((int**)A, l1, r1, l2, r2);
    cout << "Sum of the rectangle from (" << l1 << ", " << r1 << ") to (" << l2 << ", " << r2 << ") is " << sum << endl;

    return 0;
}
