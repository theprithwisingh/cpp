//ABCD
//ABCD
//ABCD
//ABCD

#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the Num: ";
cin>>n;
for (int i = 1; i <= n; i++){
   for (int j = 1; j <=n; j++)
   {
    cout<<(char)(j+64)<<" ";
   }
   cout<<endl;
}
}