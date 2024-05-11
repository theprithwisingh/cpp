#include<iostream>
#include<vector>
using namespace std;
void missingNum(vector<int>&v){
for (int i = 0; i < v.size()-1; i++)
{
    // if(v[i]==v[i+1]) continue;
    // else cout<<v[i+1];

            if (v[i + 1] - v[i] > 1) {
            for (int j = v[i] + 1; j < v[i + 1]; j++) {
                cout << j << " ";
            }
        }
}

}
int main(){
vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
//  for (int i = 0; i < v.size(); i++)
//  {
//     cout << v[i] << " ";
//  }

missingNum(v);
}