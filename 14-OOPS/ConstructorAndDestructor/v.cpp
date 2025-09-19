#include <iostream>
using namespace std;

int main() {
    int* balance = new int;
    *balance = 5000;
    cout << "Value: " << *balance << endl;
    cout << "Address: " << balance << endl;

    delete balance;         // memory free
}
