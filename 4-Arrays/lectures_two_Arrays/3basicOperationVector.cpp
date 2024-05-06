#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    //segment error
    // v[0]=1;
    // v[1]=2;
    // v[2]=4;
    // v[3]=5;
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(0);

    //if you want to update/access
    v[1]=88;
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";
}