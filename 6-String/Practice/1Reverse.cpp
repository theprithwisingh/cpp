#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void strReverse(string &s){
    int len = s.length();
    for (size_t i = 0; i < len/2; i++)
    {
    //swapping
    char temp = s[i];  // Save character at position i
    s[i] = s[len-1-i];       // Assign character at position j to position i
    s[len-1-i] = temp;       // Assign saved character to position j
    }
}
int main(){
    string s;
    cout<<"Enter The string :";
    getline(cin,s);
    strReverse(s);
    cout << "Reversed string: " << s << endl;
}
