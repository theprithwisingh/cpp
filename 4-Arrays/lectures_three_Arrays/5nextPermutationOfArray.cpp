//find the next permutations of array.//note: if not possible then print the sorted order in ascending order.

#include <iostream>
#include <algorithm>
#include <vector>

void nextPermutation(std::vector<int>& nums) {
    int k = -1;
    for (int i = nums.size() - 2; i >= 0; i--) {
        if (nums[i] < nums[i + 1]) {
            k = i;
            break;
        }
    }

    if (k == -1) {
        std::sort(nums.begin(), nums.end());
        return;
    }

    int l = -1;
    for (int i = nums.size() - 1; i > k; i--) {
        if (nums[i] > nums[k]) {
            l = i;
            break;
        }
    }

    std::swap(nums[k], nums[l]);
    std::reverse(nums.begin() + k + 1, nums.end());
}

int main() {
    std::vector<int> nums = {1, 2, 3};
    nextPermutation(nums);
    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    nums = {3, 2, 1};
    nextPermutation(nums);
    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    nums = {1, 1, 5};
    nextPermutation(nums);
    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    nums = {1, 3, 2};
    nextPermutation(nums);
    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
