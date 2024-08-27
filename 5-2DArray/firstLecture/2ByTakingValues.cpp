/*
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

    for (int i = 0; i <=m-1; i++){
        for (int j = 0; j <= n-1; j++){
            cin>>arr[i][j];
        }
        
    }
    for (int i = 0; i <=m-1; i++){
        for (int j = 0; j <= n-1; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
*/ 
#include<iostream>
using namespace std;
int main(){
    int arr[5][2];
    arr[0][0] = 11;
    arr[0][1] = 20;
    arr[1][0] = 30;
    arr[1][1] = 40;
    arr[2][0] = 5;
    arr[2][1] = 10;
    arr[3][0] = 40;
    arr[3][1] = 30;
    arr[4][0] = 10;
    arr[4][1] = 5;
    for (int i = 0; i <5; i++){
        for (int j = 0; j < 2; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}