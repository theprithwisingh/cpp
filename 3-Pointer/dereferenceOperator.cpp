#include<iostream>
using namespace std;
int main(){
 int x= 122;
 int* p =&x;
 cout<<x<<endl;
 *p = 9;
 cout<<x;
}