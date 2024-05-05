#include<iostream>
#include<vector>
using namespace std;

void sort012(vector<int>& nums) {
    int low = 0;
    int high = nums.size() - 1;
    int mid = 0;

    while (mid <= high) {
        switch(nums[mid]) {
            case 0:
                swap(nums[low++], nums[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(nums[mid], nums[high--]);
                break;
        }
    }
}

int main() {
    vector<int> nums = {0, 1, 2, 0, 1, 2, 0, 1, 2};
    
    cout << "Original array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    sort012(nums);

    cout << "Sorted array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
