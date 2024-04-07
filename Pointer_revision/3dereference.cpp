//Dereferencing a pointer means accessing the value stored at the memory address pointed to by that pointer.
#include<iostream>
using namespace std;
int main(){
    int x = 122;
    int* p = &x;
    cout<<*p;
}