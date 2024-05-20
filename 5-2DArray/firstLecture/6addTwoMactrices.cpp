#include <iostream>
using namespace std;

int main() {
    // Define the dimensions of the matrices
    const int rows = 2;
    const int cols = 4;

    // Initialize the first matrix
    int matrix1[rows][cols] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8}
    };

    // Initialize the second matrix
    int matrix2[rows][cols] = {
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    // Initialize the result matrix to store the sum
    int result[rows][cols];

    // Add the corresponding elements of the two matrices
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Display the resulting matrix
    cout << "Resulting Matrix: " << endl;
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
