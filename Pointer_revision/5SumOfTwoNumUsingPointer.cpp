//write a program to calculate sum of two numbers using poiters
#include<iostream>
using namespace std;
int main(){
    int x,y;
    int* p1 = &x;
    int* p2 = &y;
    cout<<"Enter first Number : ";
    cin>>*p1;

    cout<<"Enter second Number : ";
    cin>>*p2;
    cout<<*p1 + *p2<<endl;
    //or
    cout<<x+y;
}