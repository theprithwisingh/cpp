#include<iostream>
using namespace std;
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
    return;
}
int main(){
    int a,b;
    cin>>a>>b;
    swap(b,a);
    cout<<a<<" "<<b;
}