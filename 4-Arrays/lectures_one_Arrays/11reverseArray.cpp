#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr;
    int n;
    cout<< "Enter the size of array : ";
    cin>>n;
    cout<< "Enter the Element of array : ";
    for (int i = 0; i < n; i++){   
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }

    cout << "Array elements: ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout<<endl;

    //reversing logic
    for (int i = 0; i < count; i++)
    {
        /* code */
    }
    
}