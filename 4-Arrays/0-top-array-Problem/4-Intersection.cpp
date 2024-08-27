#include <iostream>
#include <vector>
using namespace std;

vector<int>intersectionOfTwoArrays(vector<int>&arr1, const std::vector<int>&arr2){
    vector<int>result;
    for (int i = 0; i < arr1.size(); i++){
        for (int j = 0; j < arr2.size(); j++){
            if (arr1[i]==arr2[j]){
                result.push_back(arr1[i]);
            break;
            }
        }
    }
    return result;
}
int main(){
    vector<int>arr1 = {1,2,5,6,7,8};
    vector<int>arr2 = {7,8,1,0,3,4};
    vector<int>intersectonNum = intersectionOfTwoArrays(arr1,arr2);
    for (int i = 0; i < intersectonNum.size(); i++){
        cout<<intersectonNum[i]<<" ";
    }
    
}
