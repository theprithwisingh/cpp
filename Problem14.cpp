//WAP to print the sum of all the even digits of a given number.
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the Number :";
cin>>n;
int sum = 0;
while (n>0)
  {
    int lastDigit=(n%10);
    if (lastDigit%2==0)
    {
        sum+=lastDigit;
    }
    n/=10;

  }
  cout<<sum<<endl;
}