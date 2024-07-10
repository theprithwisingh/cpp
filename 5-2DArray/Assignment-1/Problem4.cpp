#include<iostream>
#include<climits>
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

    int maxSum = INT_MIN;
    int maxRow = -1;
    for (int i = 0; i <= m-1; i++){
       int sum = 0;
       for (int j = 0; j <= n-1; j++){
        sum+=a[i][j];
       }
       if (sum>maxSum){
        maxSum = sum;
        maxRow = i;
       }
    }
    cout<<maxSum<<" "<<maxRow;
}