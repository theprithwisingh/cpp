#include<iostream>
#include<vector>
using namespace std;
void missingNum(vector<int>&v){
for (int i = 0; i < v.size()-1; i++)
{
    if(v[i]==v[i+1]){
       for (int j = 0; j < v[i+1]; j++)
        cout<<j<<"--";
       }
        
    }

    // else cout<<v[i+1];
}

int main(){
vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(9);
 for (int i = 0; i < v.size(); i++)
 {
    cout << v[i] << " ";
 }

missingNum(v);
}