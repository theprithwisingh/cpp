#include<iostream>
#include <climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
    cin>>arr[i];
    }
    // Initialize largest and smallest
    int large  = INT_MIN;
    int small = INT_MAX;

    for (int i = 0; i < n; i++){
      if (arr[i]>large){
        large = arr[i];
      }
      if (arr[i]<small){
        small = arr[i];
      }
    }
        // Output the results
    cout << "The largest element is: " << large << endl;
    cout << "The smallest element is: " << small << endl;
    
    return 0;

}