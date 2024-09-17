#include<iostream>
#include<String>
using namespace std;
int main(){
string str = "abcdef";
   cout<<str.substr(0)<<endl;//abcdef
      cout<<str.substr(1)<<endl;//bcdef
         cout<<str.substr(2)<<endl;//cdef
            cout<<str.substr(3)<<endl;//def
               cout<<str.substr(4)<<endl;//ef
                  cout<<str.substr(5)<<endl;//f
                      cout<<str.substr(6)<<endl;//
}