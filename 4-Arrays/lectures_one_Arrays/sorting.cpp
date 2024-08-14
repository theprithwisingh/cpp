#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,1,0,0,1,1,0,0,1,1};
  //for count 0's in the array
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i]==0) count++;  
    }
    //fills the 0's in array
    for (int i = 0; i < count; i++)
    {
        arr[i] = 0; 
    }

        //fills the 0's in array
    for (int i = count; i < 10; i++)
    {
        arr[i]=1;
    }
    for (int i = 0; i < 10; i++){
        cout << arr[i] << " "; 
    }
}