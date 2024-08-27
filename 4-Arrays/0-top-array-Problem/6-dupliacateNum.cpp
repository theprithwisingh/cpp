#include <iostream>
#include <vector>
#include <algorithm> // For sort function
using namespace std;

// Function to remove duplicates from a sorted vector
vector<int> removeDuplicate(vector<int> arr1) {
    // Sort the input vector
    sort(arr1.begin(), arr1.end());

    vector<int> result;

    // Traverse the sorted vector and add only unique elements to result
    for (int i = 0; i < arr1.size(); i++) {
        // If it's the first element or current element is not equal to the previous element, add it to result
        //{12, 11, 23, 12, 11,14,15,16,9}
        //{9 11 11 12 12 14 15 16 23}
        if (i==0 || arr1[i] != arr1[i - 1]) {
            result.push_back(arr1[i]);
        }
    }

    return result; // Return the vector containing unique elements
}

int main() {
    vector<int> arr1 = {12, 11, 23, 12, 11,14,15,16,9};
    vector<int> result = removeDuplicate(arr1);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}
