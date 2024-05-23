#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the Number of Rows : ";
    cin>>m;
    
    int n;
    cout<<"Enter the Number of Columns : ";
    cin>>n;
    int arr[m][n];
    int trans[n][m];

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i <= m-1; i++){
        for (int j = 0; j <= n-1; j++){
           cin>>arr[i][j];
        }  
    }

    cout << "The entered array is:" << endl;
    for (int i = 0; i <= m-1; i++){
        for (int j = 0; j <= n-1; j++){
           cout<<arr[i][j]<<" ";
        }  
    cout<<endl;
    }

    //Trasnposing
    for (int i = 0; i <=m-1; i++){
        for (int j = 0; j <=n-1; j++){
            trans[j][i] = arr[i][j];
        }
    }
    
    cout << "Transpose Printing" << endl;
    for (int i = 0; i <= n-1; i++){
     for (int j = 0; j <= m-1; j++){
           cout<<trans[i][j]<<" ";
        }  
    cout<<endl;
    }
}