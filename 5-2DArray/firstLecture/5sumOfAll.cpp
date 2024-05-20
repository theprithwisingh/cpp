#include <iostream>
#include <climits>
using namespace std;
int main() {
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
    int sum = 0;
    for (int i = 0; i <=m-1; i++){
      for (int j = 0; j <= n-1; j++)
      {
        sum += arr[i][j];
      }
    }
    cout<<sum;
}