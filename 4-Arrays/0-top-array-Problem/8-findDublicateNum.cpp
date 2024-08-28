#include <iostream>
#include <vector>
using namespace std;

void DuplicateNum(const vector<int>& nums, vector<int>& res) {
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] == nums[j]) {
                res.push_back(nums[i]);
                break; 
            }
        }
    }
}

int main() {
    vector<int> nums = {1, 2, 3, 2, 3, 5, 6, 7, 6, 7, 9};
    vector<int> res;
    DuplicateNum(nums, res);
    cout << "Duplicate numbers: ";
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    cout << endl;

    return 0;
}
