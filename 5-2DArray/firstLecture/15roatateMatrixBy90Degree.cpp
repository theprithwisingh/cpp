#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to transpose the matrix
void transposeMatrix(vector<vector<int>>& matrix, int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
}

// Function to reverse the rows of the matrix
void reverseRows(vector<vector<int>>& matrix, int n) {
    for (int i = 0; i < n; ++i) {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

// Function to rotate the matrix 90 degrees clockwise
void rotateMatrix90Clockwise(vector<vector<int>>& matrix, int n) {
    // Step 1: Transpose the matrix
    transposeMatrix(matrix, n);
    // Step 2: Reverse the rows
    reverseRows(matrix, n);
}

// Function to print the matrix
void printMatrix(const vector<vector<int>>& matrix, int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the size of the matrix: ";
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    cout << "Original Matrix:" << endl;
    printMatrix(matrix, n);

    rotateMatrix90Clockwise(matrix, n);

    cout << "Matrix after 90-degree clockwise rotation:" << endl;
    printMatrix(matrix, n);

    return 0;
}
