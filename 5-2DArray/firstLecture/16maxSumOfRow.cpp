#include<iostream>
using namespace std;
int main(){
    int arr [3][4] = {1,3,5,7,3,4,7,8,1,4,12,3};
    for (int i = 0; i < 3; i++){
        for (int j = 0; j <4; j++){
            cout<<arr[i][j]<<" ";
        }
       cout<<endl; 
    }
    int maxSum = 0;
    int maxRow = 0;
    for (int i = 0; i <3; i++){
        int sum = 0;
       for (int j = 0; j <4; j++){
            sum += arr[i][j];
       }
    cout << "Sum of row " << i << ": " << sum << endl;
    if (sum > maxSum) {
            maxSum = sum;
            maxRow = i;
       }
    }
    cout << "Row " << maxRow << " has the greatest sum: " << maxSum << endl;
}