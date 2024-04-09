#include<iostream>
using namespace std;
int main(){
  bool flag = true;
  bool* ptr = &flag;
  cout<<ptr<<endl;//0x61ff0b
  ptr++;
  cout<<ptr<<endl;//0x61ff0c
}