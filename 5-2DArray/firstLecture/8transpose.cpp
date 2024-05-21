#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the number of Row: ";
    cin>>m;
    int n;
    cout<<"Enter the number of column: ";
    cin>>n;
    int arr[m][n];
    int transpose[n][m];
/// taking input of element
    for (int i = 0; i <=m-1; i++){
        for (int j = 0; j <= n-1; j++){
            cin>>arr[i][j];
        }    
    }
//  Printing 2D array
        for (int i = 0; i <=m-1; i++){
        for (int j = 0; j <= n-1; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
//printing the transpose
    for (int i = 0; i <= m-1; i++){
        for (int j = 0; j <= n-1; j++){
        transpose[j][i]=arr[i][j];
        }

    }
cout <<"\nTransposed Matrix:"<< endl;
    for (int i = 0; i <= m-1; i++) {
        for (int j = 0; j<=n- 1; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
}