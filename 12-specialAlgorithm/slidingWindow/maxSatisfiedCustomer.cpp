#include <iostream>
#include <vector>
using namespace std;

int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
    int k = minutes;
    vector<int> arr = customers;
    int n = arr.size();
    int prevLoss = 0;

    // Calculate loss in first window
    for (int i = 0; i < k; i++) {
        if (grumpy[i] == 1)
            prevLoss += arr[i];
    }

    int maxLoss = prevLoss;
    int maxIdx = 0;
    int i = 1;
    int j = k;

    // Sliding window to find max loss window
    while (j < n) {
        int currLoss = prevLoss;

        if (grumpy[j] == 1)
            currLoss += arr[j];
        if (grumpy[i - 1] == 1)
            currLoss -= arr[i - 1];

        if (maxLoss < currLoss) {
            maxLoss = currLoss;
            maxIdx = i;
        }

        prevLoss = currLoss;
        i++;
        j++;
    }

    // Apply trick
    for (int x = maxIdx; x < maxIdx + k; x++) {
        grumpy[x] = 0;
    }

    // Calculate total satisfaction
    int sum = 0;
    for (int x = 0; x < n; x++) {
        if (grumpy[x] == 0)
            sum += arr[x];
    }

    return sum;
}

int main() {
    vector<int> customers = {1, 2, 3, 4, 5, 6};
    vector<int> grumpy = {1, 0, 1, 1, 0, 1};
    int minutes = 3;
    cout << maxSatisfied(customers, grumpy, minutes);
}
