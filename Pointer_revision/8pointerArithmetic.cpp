#include<iostream>
using namespace std;
int main(){
    int x = 4;
    int* ptr = &x;
    cout<<ptr<<endl;//0x61ff08
    cout<<*ptr<<endl;//4
    ptr = ptr + 1;
    cout<<ptr<<endl;//0x61ff0c
    cout<<*ptr<<endl;//6422284
}