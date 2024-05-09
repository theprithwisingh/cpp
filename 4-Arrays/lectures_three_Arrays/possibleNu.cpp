#include <iostream>
#include <vector>
#include <algorithm>

void printPermutations(std::vector<int>& nums) {
    do {
        for (int num : nums) {
            std::cout << num;
        }
        std::cout << std::endl;
    } while (std::next_permutation(nums.begin(), nums.end()));
}

int main() {
    std::string input;
    std::cout << "Enter a number in digits: ";
    std::cin >> input;

    std::vector<int> nums;
    for (char digit : input) {
        nums.push_back(digit - '0');
    }

    std::sort(nums.begin(), nums.end());

    do {
        for (int num : nums) {
            std::cout << num;
        }
        std::cout << std::endl;
    } while (std::next_permutation(nums.begin(), nums.end()));

    return 0;
}
