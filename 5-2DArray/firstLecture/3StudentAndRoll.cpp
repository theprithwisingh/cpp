#include <iostream>
using namespace std;
int main() {
    int r, c; 
    cout << "Enter the Roll numbers/Row: ";
    cin >> r;

    cout << "Enter the Marks/Column: ";
    cin >> c;

    // Dynamically allocate a 2D array
    int **arr = new int*[r];
    for (int i = 0; i < r; ++i) {
        arr[i] = new int[c];
    }

    // Read the array elements
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> arr[i][j];
        }
    }

    // Print the array elements
    cout << "The array elements are:" << endl;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Free the dynamically allocated memory
    for (int i = 0; i < r; ++i) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
