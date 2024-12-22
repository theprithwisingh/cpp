//Subsets
//Print subsets of a string with unique characters.
//Follow Up : Do it for array as well

#include <iostream>
#include <string>
#include<vector>
using namespace std;
void storeSubsets(string ans, string original,vector<string>& v){
if(original==""){
    v.push_back(ans);
    return;
}
char ch = original[0];
storeSubsets(ans,original.substr(1),v);
storeSubsets(ans+ch,original.substr(1),v);

}
int main(){
    string str = "physcis";
    vector<string>v;
    storeSubsets("",str,v);
    for (int i = 0; i < v.size(); i++) {
        cout << (i + 1) << " -> " << v[i] << endl;
    }
    
}

