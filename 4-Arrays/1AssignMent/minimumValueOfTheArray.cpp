#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,3,2,-9,-1,-10,4,5};
    int n = sizeof(arr)/4;
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
      if (arr[i]<min) min = arr[i];
      
    }
    cout<<min; 
}