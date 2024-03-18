#include <iostream>
using namespace std;

// declaring a function
int add(int a, int b) {
    return (a + b);
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // calling the function with user input
    int sum = add(a, b);

    cout << "Sum of " << a << " + " << b << " = " << sum << endl;

    return 0;
}
