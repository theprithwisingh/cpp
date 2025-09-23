#include <iostream>
#include <vector>
using namespace std;

class Bill {
private:
    vector<string> items;      // items ka list
    vector<int> prices;        // prices for each item
    int totalAmount;           // total bill

    static int totalBills;     // total bills generated
    static int hotelEarnings;  // hotel ka total earnings

public:
    // constructor
    Bill() {
        totalAmount = 0;
        totalBills++;
    }

    // add item to bill
    void addItem(string item, int price) {
        if (price > 0) {
            items.push_back(item);
            prices.push_back(price);
            totalAmount += price;
            cout << "✅ " << item << " added for Rs. " << price << endl;
        } else {
            cout << "❌ Invalid price for " << item << endl;
        }
    }

    // show bill
    void showBill() {
        cout << "\n--- Customer Bill ---\n";
        for (int i = 0; i < items.size(); i++) {
            cout << items[i] << " : Rs. " << prices[i] << endl;
        }
        cout << "----------------------\n";
        cout << "Total Amount = Rs. " << totalAmount << endl;
        cout << "----------------------\n";
    }

    // finalize payment
    void makePayment() {
        cout << "Payment of Rs. " << totalAmount << " received. ✅" << endl;
        hotelEarnings += totalAmount; // add to hotel account
    }

    // static function for hotel summary
    static void hotelSummary() {
        cout << "\n=== Hotel Summary ===" << endl;
        cout << "Total Bills Generated: " << totalBills << endl;
        cout << "Total Earnings: Rs. " << hotelEarnings << endl;
    }
};

// initialize static variables
int Bill::totalBills = 0;
int Bill::hotelEarnings = 0;

// main
int main() {
    // Customer 1
    Bill c1;
    c1.addItem("Paneer Butter Masala", 250);
    c1.addItem("Naan", 40);
    c1.addItem("Cold Drink", 60);
    c1.showBill();
    c1.makePayment();

    // Customer 2
    Bill c2;
    c2.addItem("Burger", 120);
    c2.addItem("French Fries", 80);
    c2.showBill();
    c2.makePayment();

    // Show hotel earnings summary
    Bill::hotelSummary();

    return 0;
}
