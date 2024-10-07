

#include<iostream>
#include<string>
using namespace std;

void checkPalindrome(const string &s) {
    int len = s.length();
    for (size_t i = 0; i < len / 2; i++) {
        if (s[i] != s[len - 1 - i]) {
            cout << "Not Palindrome" << endl;
            return;  // Exit early since it's not a palindrome
        }
    }
    cout << "Yes, it is Palindrome" << endl;  // If no mismatch is found, it's a palindrome
}

int main() {
    string s;
    cout << "Enter the string: ";
    getline(cin, s);
    checkPalindrome(s);
    return 0;
}
