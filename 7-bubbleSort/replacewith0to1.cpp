#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    int arr[] = {19, 12, 23, 8, 16};
    int n = 5;
    vector<int> v(n, 0); // 0 means not visited
    int x = 0;
    

    // Original array
    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Convert array to 0 to N-1 form
    for (int i = 0; i < n; i++) {
        int min = INT_MAX;
        int minIdx = -1;

        // Find the minimum unvisited element
        for (int j = 0; j < n; j++) {
            if (v[j] == 1) continue;
            else {
                if (min > arr[j]) {
                    min = arr[j];
                    minIdx = j;
                }
            }
        }

        arr[minIdx] = x;   // Replace the minimum element with x (0, 1, 2, ...)
        v[minIdx] = 1;     // Mark the element as visited
        x++;
    }

    // Transformed array
    cout << "Transformed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
