#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n = 4;
    int x = 3;
    vector<int> v;
    cout<<"enter the element of array :";
    for (int i = 0; i < n; i++){
        int e;
        cin>>e;
        v.push_back(e);
    }
    cout<<"Array :";
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    bool flag = false;
    for (int i = 0; i < n-1; i++){
        for (int j = i+1; j < n; j++){
        if (v[i]+v[j]==x){
            cout<<i<<" "<<j;
            flag = true;
        }
        cout<<endl;
    }
    
}
}