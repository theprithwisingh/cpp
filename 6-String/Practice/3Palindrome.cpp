#include<iostream>
#include<string>
#include<algorithm>  // For transform, isalnum
using namespace std;

// Function to check if a given string is a palindrome
void checkPalindrome(const string &s) {
    // Create a new string to store only alphanumeric characters
    string filtered;
    
    // Convert the string to lowercase and filter out non-alphanumeric characters
    for (char c : s) {
        if (isalnum(c)) {  // Check if the character is alphanumeric
            filtered += tolower(c);  // Convert to lowercase and add to filtered string
        }
    }
    
    int len = filtered.length();
    for (size_t i = 0; i < len / 2; i++) {
        if (filtered[i] != filtered[len - 1 - i]) {
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
