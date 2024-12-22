/*
#include<iostream>
#include <climits> 
using namespace std;
void maxElem(int arr[], int n, int idx, int max){
    if(idx==n){
      cout<<max;
      return;
    }
    if(arr[idx]>max) max=arr[idx];
    maxElem(arr,n,idx+1,max);
}
int main(){
    int arr[]={1,2,334,5456,67653,45454};
    int n = sizeof(arr)/sizeof(arr[0]);
    maxElem(arr,n,0,INT_MIN);
}

*/

#include <iostream>
#include <climits>
using namespace std;
int maxElem(int arr[], int n, int idx){
    if(idx == n) return INT_MIN;
    int restMax = maxElem(arr, n, idx + 1);
    return max(arr[idx], restMax);
}

int main(){
    int arr[] = {1, 2, 334, 5456, 67653, 45454};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << maxElem(arr, n, 0) << endl;
    return 0;
}
