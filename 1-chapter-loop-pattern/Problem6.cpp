//WAP to print reverse of a given numbers
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the Number :";
cin>>n;
int lastDigit = 0;
int r = 0;
//i give the nmuber 234
while(n>0){ 
  r=r*10;              //0        //4*10 =40           //43*10=430
  lastDigit=n%10;      //4        //lastDigit=23%10=3  //2%10 = 2
  r+=lastDigit;        //r=0+4    //r=40+3=43          //430+2 = 432
  n/=10;               //234/10=23 //23/10=2           //0
}
cout<<r;
}
