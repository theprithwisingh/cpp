#include <iostream>
using namespace std;
int main() {
 int arr[6]={2,2,4,7,7,8};
 int n=6;
    for (int i = 0; i < n; i++) {
     int j;
// Checking if ith element is present in array
        for (j = 0; j < n; j++)
         if (i != j && arr[i] == arr[j])break;
           if (j == n){
             cout<<arr[i];
               return 0;
                   }
      }
     return 0;
}