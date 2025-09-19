#include <bits/stdc++.h>
using namespace std;

int longestOnes(vector<int> &nums, int k) {
    int flips = 0, i = 0, j = 0;
    int maxlen = INT_MIN;

    while (j < nums.size()) {
        if (nums[j] == 1) {
            j++;
        }
        else { // nums[j] == 0
            if (flips < k) {
                flips++;
                j++;
            }
            else { // flips == k
                int len = j - i; // current window length
                maxlen = max(maxlen, len);

                // move i to just after the first 0 in the window
                while (nums[i] == 1) i++;
                i++; // skip that zero
                j++;
            }
        }
    }

    // Check for the last window
    maxlen = max(maxlen, j - i);
    return maxlen;
}

int main() {
    vector<int> nums = {1, 0, 1, 1, 0, 0, 1, 1, 1, 1, 0};
    int k = 2;
    cout << "hello Shivi" << longestOnes(nums, k) << endl; // Output: 6
}
