#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter size of array: ";
    cin>>n;
    
    int arr[n];
    for (int i = 0; i <= n-1; i++)
    {
    cin>>arr[n];
    }
    
    int count = 0;
    int x;
    cout<<"Enter the num :";
    cin>>x;
    for (int i = 0; i <= n-1; i++)
    {
        if (arr[i]>x) count++;
  
    }
    cout<<count;
}