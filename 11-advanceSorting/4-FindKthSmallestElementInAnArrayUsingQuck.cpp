#include<iostream>
using namespace std;

int partition(int arr[], int startIdx, int endIdx) {
    int pivotElement = arr[startIdx];
    int count = 0;
    
    // Count how many elements are less than or equal to the pivot
    for (int i = startIdx + 1; i <= endIdx; i++) {
        if (arr[i] <= pivotElement) count++;
    }
    
    // Place pivot element in the correct position
    int pivotIdx = startIdx + count;
    swap(arr[startIdx], arr[pivotIdx]);
    
    // Now partition the array around the pivot element
    int i = startIdx;
    int j = endIdx;
    
    while (i < pivotIdx && j > pivotIdx) {
        while (arr[i] <= pivotElement) i++;
        while (arr[j] > pivotElement) j--;
        
        if (i < pivotIdx && j > pivotIdx) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    
    return pivotIdx;
}

int kthSmallest(int arr[], int startIdx, int endIdx,int k){
    int pivotElement = partition(arr, startIdx, endIdx);
    if (pivotElement+1==k) return arr[pivotElement];
    else if(pivotElement+1<k) return kthSmallest(arr,pivotElement+1,endIdx,k);
    else return kthSmallest(arr, startIdx, pivotElement-1, k);
}
int main(){
    int arr[]={5,18,82,20,7,6,31,4,-8};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k = 4;
    cout<<kthSmallest(arr,0,n-1,k);
}