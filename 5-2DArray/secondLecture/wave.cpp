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

    // wave print
    for (int i = 0; i < m; i++){
        if (i%2==0){
           for (int j = 0; j < n; j++){
            cout<<arr[i][j]<<" ";
         } 
        }
       else{
        for (int j = n-1; j>=0; j--)
        {
            cout<<arr[i][j]<<" ";
        }
       }
    }
    
}