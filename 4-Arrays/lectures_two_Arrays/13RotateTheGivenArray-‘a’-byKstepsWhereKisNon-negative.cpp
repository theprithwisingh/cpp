#include <iostream>
#include <vector>
using namespace std;

void rotateArray(vector<int>& a, int k) {
    int n = a.size();
    k = k % n;  // To handle cases where k is greater than the array size
    reverse(a.begin(), a.end());
    reverse(a.begin(), a.begin() + k);
    reverse(a.begin() + k, a.end());
}

int main() {
    vector<int> a = {1, 2, 3, 4, 5};
    int k = 2;
    rotateArray(a, k);
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
