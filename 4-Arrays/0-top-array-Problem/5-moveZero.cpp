#include <iostream>
#include <vector>
using namespace std;

vector<int> moveZeroInEnd(vector<int>& arr) {
    vector<int> result;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] != 0) {
            result.push_back(arr[i]);
        }
    }

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 0) {
            result.push_back(0);
        }
    }
    return result;
}

int main() {
    vector<int> arr = {2, 1, 0, 3, 0, 4, 0,0,1,4,0,1,2,3,4,5,0,9,0,4,0,6,9,0,7,8,0};
    vector<int> result = moveZeroInEnd(arr);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}
