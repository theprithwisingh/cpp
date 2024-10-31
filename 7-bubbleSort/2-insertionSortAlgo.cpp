#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[6] = {5,-34,6,3,2,1} ;
    int n= 6;
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    //selection sort
    for (int i = 0; i < n; i++){
        int j = i;
        while (j>=1 && arr[j]<arr[j-1]){
            swap(arr[j], arr[j-1]);
            j--;
        }
    }
    
    cout<<endl;
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}