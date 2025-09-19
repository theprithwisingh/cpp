// Parameterized Constructor
// Parameterized Constructor
#include <iostream>
using namespace std;

class Customer {
    string name;
    int accountNum;
    long long balance;

public:

    Customer(string n, int acc, long long bal) {
        name = n;
        accountNum = acc;
        balance = bal;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accountNum << endl;
        cout << "Balance: " << balance << endl;
        cout << endl;
    }
};

int main() {
    Customer c1("Prithwi", 12345, 100000);
    Customer c2("Amit", 67890, 50000);
    Customer c3("Ravi", 54321, 75000);

    c1.display();
    c2.display();
    c3.display();
}
