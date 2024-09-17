/*
#include<iostream>
#include<String>
using namespace std;
int main(){
    string str="Prithwi singh";
    cout<<str<<endl;//Prithwi singh
      cout<<str[0]<<endl;//P
         cout<<str[1]<<endl;//r
            cout<<str[2]<<endl;//i
}
*/

/*
#include<iostream>
#include<String>
using namespace std;
int main(){
    string str;
    cin>>str;//if only if the given string has no spaces
    cout<<str;
}
*/

#include<iostream>
#include<String>
using namespace std;
int main(){
    //for string has spaces
    string str;
    getline(cin,str);
    cout<<str;
}
