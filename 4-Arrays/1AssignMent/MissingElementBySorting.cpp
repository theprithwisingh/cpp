#include<iostream>
using namespace std;
   int main(){
     int arr[] = {-8,-2,0,1,2,3,4,5};
     int n = sizeof(arr)/4;
     bool flag = false;
     int x = 1;
   for(int i=0;i<n;i++){
        if (arr[i]<=0) continue;
        if (x!=arr[i])
        {
            cout<<x;
            flag = true;
            break;
        }
        else x++;
      }
    if (flag==false)
    {
        cout<<"There was no missing element";
    }
      
      }