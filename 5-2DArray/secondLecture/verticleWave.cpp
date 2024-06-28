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
//Har column ko visit karenge.
//Agar column index even hai, toh top to bottom traverse karenge.
//Agar column index odd hai, toh bottom to top traverse karenge.
 for (int j = 0; j < n; j++){
    if (j%2==0){
      for (int i = 0; i < m; i++){
        cout << arr[i][j]<< " ";
      }
      
    }
    else{
        for (int i = n-1; i >= 0; i--)
        {
           cout << arr[i][j]<< " ";
        }
        
    }
  }
}