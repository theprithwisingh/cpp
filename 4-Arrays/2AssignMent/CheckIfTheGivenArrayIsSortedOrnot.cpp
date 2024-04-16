#include <iostream>
using namespace std;
  int main() {
  int arr[10]={10,2,4,7,3,5,8,6,9,1};
   for (int i = 1; i < 10; i++){
// Unsorted pair found
    if (arr[i - 1] > arr[i]){
    cout<<"NO"<<endl;
     return 0;
   }
 }
// No unsorted pair found
  cout<<"YES"<<endl;
 return 0;
}