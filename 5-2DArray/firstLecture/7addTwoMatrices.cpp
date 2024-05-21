#include <iostream>
using namespace std;
int main() {
    int arr1[2][2] = {1, 2, 3, 4};
    int arr2[2][2] = {5, 6,7, 8,};
    int res[2][2];

   // addition
//    for (int i = 0; i <= 1; i++){
//    for (int j = 0; j <= 1; j++){
//     res[i][j] = arr1[i][j]+arr2[i][j];
//    }
//    }
   //print
   for (int i = 0; i <= 1; i++){
    for (int j = 0; j <= 1; j++){
        cout<<arr1[i][j]+arr2[i][j]<<" ";
    }
    cout<<endl;
   }
   
}