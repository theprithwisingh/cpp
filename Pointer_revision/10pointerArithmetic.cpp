#include<iostream>
using namespace std;
int main(){
int x = 4;
int* ptr = &x;
cout<<*ptr<<endl;//4
//*ptr++; warning
//(*ptr)++; not giving warning
*ptr = *ptr + 1;
cout<<*ptr<<endl;//5
}