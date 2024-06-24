#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the number of 1st matrices's Row";
    cin>>m;

    int n;
    cout<<"Enter the number of 1st matrices's Column";
    cin>>n;
    int 
    int p;
    cout<<"Enter the number of 2nd matrices's Row";
    cin>>p;

    int q;
    cout<<"Enter the number of 2nd matrices's Column";
    cin>>q;

    if(n==p){
        int a[m][n];
        for (int i = 0; i < m; i++){
            for (int j = 0; j <=n; j++){
                cin>>a[i][j];
            }
        }

        int b[p][q];
        for (int i = 0; i < p; i++){
            for (int j = 0; j <=q; j++){
                cin>>b[i][j];
            }
        }
    // multiplication resultant
        int res[m][q];
        for (int i = 0; i < m; i++){
            for (int j = 0; j <=q; j++){
                res[i][j]=0;
                for (int k = 0; k < p; k++){
                    res[i][j]=a[i][k]*b[k][j];
                }
                
            }
        }
        for (int i = 0; i < m; i++){
            for (int j = 0; j < q; j++){
                cout<<res[i][j];
            }
            
        }
        
    }
    else{//n!=p
      cout<<"Multiplication is not possible bcoz 1st matrices's column and 2nd matrices's row is not equal(n!=p)";
    }
}