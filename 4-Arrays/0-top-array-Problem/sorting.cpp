#include <iostream>
#include <vector>
#include <algorithm> // For sort function
using namespace std;

vector<int> mergeSortedArray(vector<int>& arr1, vector<int>& arr2) {
    // Dono arrays ko sort karna
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    vector<int> result;
    int i = 0, j = 0;

    // Dono arrays ko merge karna
    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] < arr2[j]) {
            result.push_back(arr1[i]);
            i++;
        } else {
            result.push_back(arr2[j]);
            j++;
        }
    }

    // Agar pehle array me kuch elements bach gaye ho
    while (i < arr1.size()) {
        result.push_back(arr1[i]);
        i++;
    }

    // Agar dusre array me kuch elements bach gaye ho
    while (j < arr2.size()) {
        result.push_back(arr2[j]);
        j++;
    }

    return result;
}

int main() {
    vector<int> arr1 = {2, 1, 3};
    vector<int> arr2 = {4, 7, 5};
    vector<int> result = mergeSortedArray(arr1, arr2);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}
