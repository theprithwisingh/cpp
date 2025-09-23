#include<iostream>
#include<string>
using namespace std;

class Customer {
   string name;
   long long Account_number;
   long long Balance;
   static long long total_balance_in_bank;
   static int total_customer;

   public:
   Customer(string n, long long ac, long long bal) {
        this->name = n;
        this->Account_number = ac;
        this->Balance = bal;
        total_customer++;
        total_balance_in_bank += bal;
        cout << "constructor!!" << endl;
   }

   ~Customer() {
        cout << "destructor!!" << endl;
   }

   void display() {
        cout << name << " , " 
             << Account_number << " , " 
             << Balance << " , Total bank balance = " 
             << total_balance_in_bank << endl;
   }

   void deposit(long long amount){
        if(amount > 0){
          Balance += amount;
          total_balance_in_bank += amount;
        }
   }

   void withdraw(long long amount){
     if (amount <= Balance && amount > 0){
       Balance -= amount;
       total_balance_in_bank -= amount;
     }
   }

   void display_total(){
    cout<<"Total customers = "<<total_customer<<endl;
    cout<<"Total_balance_in_bank = "<<total_balance_in_bank<<endl;
   }
  
   static void accessStatic(){
    cout<<"Total customers = "<<total_customer<<endl;
    cout<<"Total_balance_in_bank = "<<total_balance_in_bank<<endl;
   }
};

long long Customer::total_balance_in_bank = 0;  
int Customer::total_customer = 0;

int main() {
    Customer c1("Prithwi", 345678, 500000000000);
    Customer c2("Tony",    456754, 600000000000);
    Customer c3("Thor",    123567, 700000000000);

    c1.display();
    c2.display();
    c3.display();

    Customer::accessStatic();  // static access without object
    return 0;
}
