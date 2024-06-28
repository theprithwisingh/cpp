#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout << "Enter the number of 1st matrix's rows: ";
    cin >> m;
    cout << "Enter the number of 1st matrix's columns: ";
    cin >> n;
     int arr[m][n];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin>>arr[i][j];
        }
    }

    for (int i = m-1; i >=0; i--){
    if (i%2==0){
        for (int j = 0; j < n; j++){
            cout<<arr[i][j]<<" ";
        }
    }
    else{
        for (int j = 0; j < n; j++)
        {
         cout<<arr[i][j]<<" ";
        }
        
    }
    }
    
}