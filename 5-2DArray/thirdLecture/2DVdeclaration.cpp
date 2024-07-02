#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int> >v = {
        {1, 2, 3},
        {4, 5},
        {6, 7, 8, 9}
    };

    cout << "Size of outer vector: " << v.size() << endl;

    for (size_t i = 0; i < v.size(); ++i) {
        cout << "Size of inner vector " << i << ": " << v[i].size() << endl;
    }

    return 0;
}
