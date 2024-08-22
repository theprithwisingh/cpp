#include <iostream>
#include <vector>
using namespace std;

void change(vector<int>& a) {
    a[0] = 100;
}

int main() {
    vector<int> v;
    for (int i = 0; i < 10; i++) {
        v.push_back(i);
    }
    
    change(v);
    
    
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    
    return 0;
}
