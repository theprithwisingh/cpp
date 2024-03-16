#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false; // 0 and 1 are not prime
    }
    if (num <= 3) {
        return true; // 2 and 3 are prime
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false; // Divisible by 2 or 3 (except 2 and 3)
    }

    // Efficiently check divisibility up to the square root of num
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int num1, num2;

    cout<< "Enter two number: ";
    cin>>num1;

    cout<< "Enter two number: ";
    cin>>num2;

    cout << num1 << " is " << (isPrime(num1) ? "prime" : "composite") << endl;
    cout << num2 << " is " << (isPrime(num2) ? "prime" : "composite") << endl;

    return 0;
}
