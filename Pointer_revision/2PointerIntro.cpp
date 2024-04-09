#include<iostream>
using namespace std;
int main(){
    int x = 4;
    int* ptr = &x;
    cout<<ptr<<endl;//0x61ff08
    cout<<*ptr<<endl;//4
    cout<<&x;//0x61ff08
}