#include <iostream>
#include <vector>
#include <algorithm> // For sort function
using namespace std;
vector<int>mergeSortedArray(int &arr1, int &arr2){
     sort(arr1.begin(), arr1.end());
     sort(arr2.begin(), arr2.end());
     vector<int>result;
     for (int i = 0; i < arr1.size(); i++){
       result.push_back([arr1[i]])
     }
     for (int j = 0; j < arr2.size(); j++){
       result.push_back([arr2[j]])
     }
     
return result;
}
int main(){
    vector<int>arr1={2,1,3};
    vector<int>arr2={4,7,5};
    vector<int> result = mergeSortedArray(arr1,arr2);
     for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}