#include<iostream>
using namespace std;
void sumOf0toN(int sum,int n){
    if(n==0){
        cout<<sum<<endl;
        return;//base case

    }
    sumOf0toN(sum+n,n-1);
}
int main(){
    sumOf0toN(0,10);
}