#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> vec;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    // vec.push_back(6);

    cout << "Size: " << vec.size() <<endl;
    cout << "Capacity: " << vec.capacity() <<endl;

    // vec.pop_back();
    // cout << "Size: " << vec.size() <<endl;
    // cout << "Capacity: " << vec.capacity() <<endl;

    return 0;
}
