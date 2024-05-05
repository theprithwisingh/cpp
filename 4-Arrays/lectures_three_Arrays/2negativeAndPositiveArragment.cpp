#include<iostream>
#include<vector>
using namespace std;

void rearrange(vector<int>& nums) {
    int n = nums.size();
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        if (nums[left] < 0) {
            left++;
        } else if (nums[right] >= 0) {
            right--;
        } else {
            swap(nums[left], nums[right]);
            left++;
            right--;
        }
    }
}

int main() {
    vector<int> nums = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    
    cout << "Original array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    rearrange(nums);

    cout << "Rearranged array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
