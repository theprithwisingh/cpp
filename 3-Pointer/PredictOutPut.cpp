#include<iostream>
using namespace std;
int main(){
    int a = 15;
    int *ptr = &a;
    int b = ++(*ptr); //pre-increament;
    cout<<a<<" "<<b;
}