#include <iostream>
using namespace std;

// Function to calculate the factorial
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;

    if (number < 0)
        cout << "Factorial of negative number is not defined.";
    else
        cout << "Factorial of " << number << " = " << factorial(number);

    return 0;
}
