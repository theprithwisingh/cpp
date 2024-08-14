#include<iostream>
#include<vector>
using namespace std;

int main() {
    int x;
    cout << "ENTER THE TARGET NUM: ";
    cin >> x;

    vector<int> v;
    int n;
    cout << "ENTER ARRAY SIZE: ";
    cin >> n;

    if (n < 2) {
        cout << "Array size must be at least 2 to find pairs." << endl;
        return 0;
    }

    cout << "ENTER ARRAY ELEMENTS: ";
    for (int i = 0; i < n; i++) {
        int q;
        cin >> q;
        v.push_back(q);  // Add element to the vector
    }

    bool found = false;  // Flag to check if at least one pair is found
    for (int i = 0; i < v.size() - 1; i++) {
        for (int j = i + 1; j < v.size(); j++) {
            if (v[i] + v[j] == x) {
                cout << "(" << i << "," << j << ")" << endl;
                found = true;
            }
        }
    }

    if (!found) {
        cout << "No pairs found with the sum equal to the target number." << endl;
    }

    return 0;
}


