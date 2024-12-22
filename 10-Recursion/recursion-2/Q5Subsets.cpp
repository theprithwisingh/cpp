//Subsets
//Print subsets of a string with unique characters.
//Follow Up : Do it for array as well

#include <iostream>
#include <string>
using namespace std;
void printSubset(string ans, string original){
if(original==""){
    cout<<ans<<endl;
    return;
}
char ch = original[0];
printSubset(ans,original.substr(1));
printSubset(ans+ch,original.substr(1));

}
int main(){
    string str = "physcis";
    printSubset("",str);
}

