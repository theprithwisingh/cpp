#include<iostream>
using namespace std;
int main(){
int n = 100;
for (int i = 1; i <=100; i=i+2)
{
    for (int j = 1; j <=i; j=j+4)
    {
        cout<<j<<" ";
    } 
  }
}