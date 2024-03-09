//WAP the sum of this series : 1-2+3-4+5-6...
/*
#include<iostream>
using namespace std;
int main(){
 int n;
 int sum = 0;
 cout<<"Enter the number :";
 cin>>n;
 for(int i = 0; i <= n; i++)
 {
    // sum+=i;
    if (i%2!=0)sum+=i;
    else sum-=i;
 }
 cout<<sum;
 }*/
#include<iostream>
using namespace std;
int main(){
 int n;
 int sum = 0;
 cout<<"Enter the number :";
 cin>>n;
 if (n%2==0) sum=-n/2;
 else sum=-n/2 + n;
  cout<<sum;
 }