#include<iostream>
#include <climits>
using namespace std;
int main(){
    int arr[] = {1,3,2,-9,-1,-10,4,5};
    int n = sizeof(arr)/4;
    int max = INT_MIN;
    int smax = INT_MIN;
    for (int i = 0; i < n; i++)
    {
    //   if (arr[i]>max) max = arr[i];
    //   if (arr[i]>smax && arr[i]!= max) smax=arr[i];

    if (arr[i]>max)
    {
        smax = max;
        max = arr[i];
    }
    }
    cout<<max<<endl;
    cout<<smax<<endl; 
}