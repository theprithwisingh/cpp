#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxArea(vector<int>& height) {
    int left = 0;  // Initialize left pointer
    int right = height.size() - 1;  // Initialize right pointer
    int max_area = 0;  // Variable to store the maximum area

    while (left < right) {
        // Calculate the current height and width
        int current_height = min(height[left], height[right]);
        int current_width = right - left;
        int current_area = current_height * current_width;
        
        // Update the maximum area if the current area is larger
        max_area = max(max_area, current_area);

        // Move the pointer pointing to the shorter line
        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    return max_area;  // Return the maximum area found
}

int main() {
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int result = maxArea(height); 
    cout << "max_area : " << result << endl; 
    return 0;
}
