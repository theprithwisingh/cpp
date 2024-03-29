#include<iostream>
using namespace std;
int gcd(int a, int b){
    int hcf = 1;
    for (int i = min(a,b); i>=1; i--)
    {
    if (a%i==0 && b%i==0) //i is a Commmon factor
    {
    hcf=i;
    break;
    }
    }
return hcf;
}

int main(){
int a;
cout<<"Enter the 1st Number ";
cin>>a;
int b;
cout<<"Enter the 2nd Number ";
cin>>b;
cout<<gcd(a,b);
}