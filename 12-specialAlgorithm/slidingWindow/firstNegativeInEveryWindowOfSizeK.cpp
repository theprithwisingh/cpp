/*
#include <iostream>
#include <vector>
using namespace std;

vector<int> firstNegativeInEveryWindowOfSizeK(vector<int>& nums, int m, int k) {
    vector<int> ans;

    // Outer loop → starting index of each window
    for (int i = 0; i <= m - k; i++) {
        bool found = false;

        // Inner loop → check k elements in current window
        for (int j = i; j < i + k; j++) {
            if (nums[j] < 0) {
                ans.push_back(nums[j]); // first negative found
                found = true;
                break; // stop searching inside this window
            }
        }

        if (!found) {
            ans.push_back(0); // if no negative found, push 0
        }
    }

    return ans;
}

int main() {
    vector<int> arr = {2, 3, 4, 4, -7, -1, 4, -2, 6};
    int n = arr.size();
    int k = 3;

    vector<int> result = firstNegativeInEveryWindowOfSizeK(arr, n, k);
    for (int x : result) {
        cout << x << " ";
    } 
    return 0;
}
*/

#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 3, 4, -7, -1, 4, -2, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int k = 5;
    int p = -1;
    int ans[n - k + 1];

    // First window
    for (int i = 0; i < k; i++) {
        if (arr[i] < 0) {
            p = i;
            break;
        }
    }

    if (p == -1) ans[0] = 1;
    else ans[0] = arr[p];

    // Sliding window
    int i = 1;
    int j = k;
    while (j < n) {
        if (p >= i) ans[i] = arr[p];
        else {
            p = -1;
            for (int x = i; x <= j; x++) {
                if (arr[x] < 0) {
                    p = x;
                    break;
                }
            }
            if (p != -1) ans[i] = arr[p];
            else ans[i] = 1;
        }
        i++;
        j++;
    }

    for (int t = 0; t < n - k + 1; t++) {
        cout << ans[t] << " ";
    }

    return 0;
}
