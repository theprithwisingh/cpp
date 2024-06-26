#include <iostream>
using namespace std;

int multiply(int x, int res[], int res_size) {
    int carry = 0;
    for (int i = 0; i < res_size; i++) {
        int prod = res[i] * x + carry;
        res[i] = prod % 10;
        carry = prod / 10;
    }
    while (carry) {
        res[res_size] = carry % 10;
        carry = carry / 10;
        res_size++;
    }
    return res_size;
}

void factorial(int n) {
    int res[500]; // Array to store the result
    res[0] = 1; // Initialize result as 1
    int res_size = 1; // Initialize the size of the result

    // Apply factorial formula
    for (int x = 2; x <= n; x++) {
        res_size = multiply(x, res, res_size);
    }

    // Print the result
    cout << "Factorial of " << n << " is: ";
    for (int i = res_size - 1; i >= 0; i--) {
        cout << res[i];
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number to find its factorial: ";
    cin >> n;
    factorial(n); // Call the factorial function
    return 0;
}
