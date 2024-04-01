#include<iostream>
using namespace std;
int main(){
    int arr[10];
    for (int i = 0; i <=9; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i <=9; i++)
    {
        if (arr[i]<35)
        {
            cout<<arr[i]<<"-";
        }
        
    }
    
}