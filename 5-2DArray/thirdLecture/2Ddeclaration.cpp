#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int> >v(3, vector<int>(8,2));

    for(size_t i = 0; i<3; i++){
        for (size_t j = 0; j < 8; j++)
        {
            cout<<v[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<v.size()<<endl;//number of columns
    cout<<v[2].size();
} 