#include<iostream>
using namespace std;

int main(){
    int m,n;
    cout << "Enter the number of 1st matrix's rows: ";
    cin >> m;
    cout << "Enter the number of 1st matrix's columns: ";
    cin >> n;
    int arr[m][n];

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    // Spiral traversal
    int minr = 0, minc = 0;
    int maxr = m - 1, maxc = n - 1;

    cout << "Spiral order of the matrix is: ";
    while (minr <= maxr && minc <= maxc) {
        // Right
        for (int j = minc; j <= maxc; j++) {
            cout << arr[minr][j] << " ";
        }
        minr++;

        // Down
        for (int i = minr; i <= maxr; i++) {
            cout << arr[i][maxc] << " ";
        }
        maxc--;

        // Left
        if (minr <= maxr) {
            for (int j = maxc; j >= minc; j--) {
                cout << arr[maxr][j] << " ";
            }
            maxr--;
        }

        // Up
        if (minc <= maxc) {
            for (int i = maxr; i >= minr; i--) {
                cout << arr[i][minc] << " ";
            }
            minc++;
        }
    }

    return 0;
}
