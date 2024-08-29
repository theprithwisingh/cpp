#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int thirdMax(vector<int>& nums) {
    set<int> unique_nums(nums.begin(), nums.end());
    if (unique_nums.size() < 3) {
        return *unique_nums.rbegin();
    }
    auto it = unique_nums.rbegin();
    advance(it, 2);
    return *it;
}

int main() {
    vector<int> nums = {3, 2, 1};
    cout << thirdMax(nums) << endl;
    return 0;
}
