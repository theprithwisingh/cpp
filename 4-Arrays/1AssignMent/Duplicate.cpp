#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,-3,2,5,6,3,7};
    int n = sizeof(arr)/4;
    bool flag = false;
    for (int i = 0; i < n; i++){
      for (int j = i+1; j < n; j++){
        if (arr[i]==arr[j]){
            flag = true;
        }
      }
      if (flag==true) break;
    }
    if (flag==true) cout<<"CD";
    else cout<<"All element are unique";
}