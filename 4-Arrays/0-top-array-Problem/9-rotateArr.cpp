#include <iostream>
#include <vector>
using namespace std;

// Function to reverse a portion of the array
void reverse(vector<int>& nums, int start, int end) {
    while (start < end) {
        swap(nums[start], nums[end]);
        start++;
        end--;
    }
}

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n; // Effective rotations
    
    // Step 1: Reverse the entire array
    reverse(nums, 0, n - 1);
    
    // Step 2: Reverse the first k elements
    reverse(nums, 0, k - 1);
    
    // Step 3: Reverse the remaining n-k elements
    reverse(nums, k, n - 1);
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    rotate(nums, k);

    for (int num : nums) {
        cout << num << " ";
    }
    return 0;
}

/*
#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n; // Effective rotations
    int count = 0; // Count of elements moved

    for (int start = 0; count < n; ++start) {
        int current = start;
        int prev = nums[start];

        do {
            int next = (current + k) % n;
            int temp = nums[next];
            nums[next] = prev;
            prev = temp;
            current = next;
            count++;
        } while (start != current); // Cycle check
    }
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    rotate(nums, k);

    for (int num : nums) {
        cout << num << " ";
    }
    return 0;
}
*/

/*
#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n; // k ko reduce karte hai effective steps tak
    reverse(nums.begin(), nums.end()); // Step 1: pura array reverse
    reverse(nums.begin(), nums.begin() + k); // Step 2: first k elements reverse
    reverse(nums.begin() + k, nums.end()); // Step 3: baaki ke elements reverse
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    rotate(nums, k);
    
    for (int num : nums) {
        cout << num << " ";
    }
    return 0;
}
*/