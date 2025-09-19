 #include <iostream>
#include <string>
using namespace std;

// Function to generate the "count and say" sequence for nth term
string countAndSay(int n) {
    // Base case
    if (n == 1) return "1";
    
    // Recursively get the (n-1)th term
    string prev = countAndSay(n - 1);
    
    // Process the previous term to generate the nth term
    string result = "";
    int count = 1;  // To count occurrences of each character
    
    // Loop through the previous term and apply run-length encoding
    for (int i = 1; i < prev.length(); ++i) {
        // If the current character is same as the previous, increase the count
        if (prev[i] == prev[i - 1]) {
            count++;
        } else {
            // Append the count and the character to the result
            result += to_string(count) + prev[i - 1];
            count = 1;  // Reset the count for the new character
        }
    }
    

    result += to_string(count) + prev[prev.length() - 1];
    
    return result;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    string result = countAndSay(n);
    cout << "The " << n << "th term of the count and say sequence is: " << result << endl;
    return 0;
}


//leetcode 
/*
class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";
        string str = countAndSay(n-1);
        string ztr = "";
        int freq = 1;
        char ch = str[0];
        for(int i=1;i<str.length();i++){
            char dh = str[i];
            if(ch==dh){
                freq++;
            }
            else{
                ztr+=(to_string(freq)+ch);
                freq=1;
                ch=dh;
            }
        }
        ztr+=(to_string(freq)+ch);
        return ztr;
    }
};
*/
