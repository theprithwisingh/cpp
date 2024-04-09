#include<iostream>
using namespace std;
int main(){
    int x = 5;
    int* ptr  = &x;
    int** p = &ptr;
    cout<<x<<endl;
    cout<<ptr<<endl;//0x61ff08-> this x address
    cout<<p<<endl;//0x61ff04 -> this ptr address
}
//double pointer having pointer address