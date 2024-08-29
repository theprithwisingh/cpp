#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> mergeIntervals(vector<vector<int>>& intervals) {
    // Step 1: Sort intervals based on the starting point
    sort(intervals.begin(), intervals.end());

    // Step 2: Initialize the result list with the first interval
    vector<vector<int>> merged;
    merged.push_back(intervals[0]);

    // Step 3: Iterate through the intervals
    for (int i = 1; i < intervals.size(); i++) {
        vector<int>& lastMerged = merged.back();
        vector<int>& current = intervals[i];

        // Check if there is an overlap
        if (current[0] <= lastMerged[1]) {
            // Merge the intervals
            lastMerged[1] = max(lastMerged[1], current[1]);
        } else {
            // No overlap, add the current interval
            merged.push_back(current);
        }
    }

    return merged;
}

int main() {
    vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    vector<vector<int>> result = mergeIntervals(intervals);

    // Output the result
    cout << "Merged Intervals: ";
    for (const auto& interval : result) {
        cout << "[" << interval[0] << "," << interval[1] << "] ";
    }
    cout << endl;

    return 0;
}
