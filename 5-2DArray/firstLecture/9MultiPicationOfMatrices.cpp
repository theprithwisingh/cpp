#include <iostream>
using namespace std;

int main() {
    // Define the first matrix (3x2)
    int matrixA[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    // Define the second matrix (2x3)
    int matrixB[2][3] = {
        {7, 8, 9},
        {10, 11, 12}
    };

    // Result matrix (3x3)
    int result[3][3] = {0};

    // Multiply the matrices
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 2; k++) {
                result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    // Print the result
    cout << "Result matrix is: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
