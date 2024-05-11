//Find a peak element which is not smaller than its neighbours.
#include <iostream>
#include <vector>
using namespace std;
int findPeakElement(vector<int>& nums) {
    int n = nums.size();
    for (int i = 0; i < n; ++i) {
        if ((i == 0 || nums[i] >= nums[i - 1]) 
        && (i == n - 1 || nums[i] >= nums[i + 1])) {
            return i;
        }
    }
    return -1; // If no peak element is found
}

int main() {
    std::vector<int> nums = {1, 2, 3, 1};
    int peakIndex = findPeakElement(nums);
    if (peakIndex != -1) {
        std::cout << "Peak element found at index " << peakIndex << ": " << nums[peakIndex] << std::endl;
    } else {
        std::cout << "No peak element found." << std::endl;
    }
    return 0;
}
