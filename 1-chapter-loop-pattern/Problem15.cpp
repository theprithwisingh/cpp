//pattern printing
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter of rows: ";
    cin>>n;

    int m;
    cout<<"No of column: ";
    cin>>m;

    for (int i = 1; i <=n; i++){
        for (int i = 1; i <= m; i++)
        {           
        cout<<" * ";
        }
        cout<<endl;
    }
    
}