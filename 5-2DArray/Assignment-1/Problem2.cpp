#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"m";
    cin>>m;
    cout<<"n";
    cin>>n;
    int a[m][n];
    for (int i = 0; i <= m-1; i++){
        for (int j = 0; j <= n-1; j++){
         cin>>a[i][j];
        }
    }

    int p,q;
    cout<<"p";
    cin>>p;
    cout<<"q";
    cin>>q;
    int b[p][q];
    for (int i = 0; i <= p-1; i++){
        for (int j = 0; j <= q-1; j++){
         cin>>b[i][j];
        }
    }
    if (m==p||n==q){
        for (int i = 0; i <=p-1; i++){
        for (int j = 0; j <=q-1; j++){
            b[i][j]=a[i][j]+b[i][j];
            cout<<b[i][j];
        }
        cout<<endl;
    }
  }
  else{
    cout<<"Not Possible";
  }
}