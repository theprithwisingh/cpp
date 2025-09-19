#include <iostream>
using namespace std;

class Customer
{
    string name;
    int account_number, balance;
    static int total_customer;
    static int total_balance;
  
public:
    Customer(string name, int account_number, int balance) {
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
        total_customer++;
        total_balance += balance;   
    }
  
    void display() {
        cout << name << " ---- " << account_number << " --- " 
             << balance << " --- " << total_customer << endl;
    }
   
    void deposit(int amount){
        if(amount > 0){
            balance += amount;
            total_balance += amount;
        }
    }
    
    void withdrawal(int amount){
        if(amount <= balance && amount > 0){
            balance -= amount;
            total_balance -= amount;
        }
    }
    
    void display_total(){
        cout << "Total customers = " << total_customer << endl;
        cout << "Total balance   = " << total_balance << endl;
    }

    // static function (class level)
    static void accessStatic() {
        cout << "Total customers = " << total_customer << endl;
        cout << "Total balance   = " << total_balance << endl;
    }
};

int Customer::total_customer = 0;
int Customer::total_balance = 0;

int main() {
    Customer A1("Prithwi", 1, 1000);
    Customer A2("Mohit", 2, 2000);
    Customer A3("Tony", 3, 3000);

    A1.display();
    A2.display();
    A3.display();

    cout << "\nAfter some transactions:\n";
    A1.deposit(500);
    A2.withdrawal(1000);

    A1.display();
    A2.display();
    A3.display();

    cout << "\nUsing normal function:\n";
    A1.display_total();

    cout << "\nUsing static function:\n";
    Customer::accessStatic();   // object ki zarurat nahi
}
