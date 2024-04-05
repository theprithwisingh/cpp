// double pointer to store address of a single pointer

#include<iostream>
using namespace std;
int main(){
    int x = 5;
    int* ptr = &x;
    int** p = &ptr;
    cout<<x<<endl;
    cout<<ptr<<endl; // address of x
    cout<<p<<endl; // address of ptr

    cout<<x<<endl;//5
    cout<<*ptr<<endl;//5
    cout<<**p<<endl;//5
}