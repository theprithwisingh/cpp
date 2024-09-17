#include <vector>
#include <iostream>

int removeElement(std::vector<int>& nums, int val) {
    int k = 0; // Pointer to track the position of non-val elements
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] != val) {
            nums[k] = nums[i]; // Place the non-val element at the k-th position
            k++; // Move the pointer to the next position
        }
    }
    return k; // k is the number of elements not equal to val
}

int main() {

    std::vector<int> nums1 = {3, 2, 2, 3};
    int val1 = 3;
    int result1 = removeElement(nums1, val1);
    std::cout << "Output: " << result1 << ", nums = [";
    for (int i = 0; i < result1; ++i) {
        std::cout << nums1[i] << (i < result1 - 1 ? ", " : "");
    }
    std::cout << "]" << std::endl;

    // Example 2
    std::vector<int> nums2 = {0, 1, 2, 2, 3, 0, 4, 2};
    int val2 = 2;
    int result2 = removeElement(nums2, val2);
    std::cout << "Output: " << result2 << ", nums = [";
    for (int i = 0; i < result2; ++i) {
        std::cout << nums2[i] << (i < result2 - 1 ? ", " : "");
    }
    std::cout << "]" << std::endl;

    return 0;
}
