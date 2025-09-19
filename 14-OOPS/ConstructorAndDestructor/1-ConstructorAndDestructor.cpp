#include <iostream>
using namespace std;
class customer {
    string name;
    int accountNum;
    int balance;
public:
    customer(){
      name ="prithwi";
      accountNum=12345567;
      balance=10000000000;
    }
    void display(){
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accountNum << endl;
        cout << "Balance: " << balance << endl;
    }
};
int main() {
    customer c1,c2,c3;
    c1.display();
     c2.display();
      c3.display();
}
//Yeh default constructor hai (koi parameter nahi).
//Jab bhi aap ek customer object banate ho (c1, c2, c3), constructor call hota hai.
//Constructor ke andar aapne har object ke liye same fixed values assign kar di:
//name = "prithwi";
//accountNum = 12345567;
//balance = 10000000000;
//Isiliye c1, c2, c3 sab ke andar ek hi data store hota hai, aur display karne par wahi dikhata hai.


