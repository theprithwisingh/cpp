#include<iostream>
#include<vector>
using namespace std;
int main(){
//    vector<int>arr[n][m];
   int m;
   cout<<"Enter the Number the Row : ";
   cin>>m;
     
   int n;
   cout<<"Enter the Number the Column: ";
   cin>>n;
  int arr[m][n];

  for (int i = 0; i <m; i++){
    for (int j = 0; j < n; j++){
        cin>>arr[i][j];
    }
  }
  for (int i = 0; i <m; i++){
    for (int j = 0; j < n; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
 
    int maxSum = 0;
    int maxRow = 0;
  for (int i = 0; i <m; i++){
        int sum = 0;
    for (int j = 0; j <n; j++){
            sum += arr[i][j];
    }
  
  cout << "Sum of row " << i << ": " << sum << endl;
    if (sum > maxSum) {
            maxSum = sum;
            maxRow = i;
       }
  }
    cout << "Row " << maxRow << " has the greatest sum: " << maxSum << endl;
}  