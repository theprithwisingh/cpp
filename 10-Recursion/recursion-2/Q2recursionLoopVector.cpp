#include <bits/stdc++.h>
using namespace std;

void print(vector<int> &arr, int idx){
    if(idx == arr.size()) return;  // Base case
    cout << arr[idx] << " ";       // Print the current element
    print(arr, idx + 1);           // Recursive call for the next index
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    print(arr, 0);
    return 0;
}
