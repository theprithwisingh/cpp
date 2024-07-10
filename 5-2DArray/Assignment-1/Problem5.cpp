#include<iostream>
#include<climits>
using namespace std;
int main(){
    int m;
    cout<<"m";
    cin>>m;
 
    int a[m][m];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < m; j++){
         cin>>a[i][j];
        }
    }
    //printing middle row and col
    for (int i = 0; i <m ; i++){
        for (int j = 0; j < m; j++){
            if (i==m/2 or j==m/2){
               cout<<a[i][j]<<" ";
            }
            else
                cout<<"+"<<" ";
        }
        cout<<endl;
    }
    
}