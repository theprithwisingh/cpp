#include <iostream>
using namespace std;

int kthGrammar(int n, int k) {
    // Start with the first row which is just "0"
    string row = "0";
    
    // Generate rows up to the nth row
    for (int i = 1; i < n; i++) {
        string new_row = "";
        for (char c : row) {
            if (c == '0') {
                new_row += "01";  // Replace '0' with '01'
            } else {
                new_row += "10";  // Replace '1' with '10'
            }
        }
        row = new_row;  // Update row to the newly generated row
    }
    
    // Since k is 1-indexed, return the k-th symbol
    return row[k - 1] - '0';
}

int main() {
    // Example test cases
    cout << kthGrammar(1, 1) << endl;  // Output: 0
    cout << kthGrammar(2, 1) << endl;  // Output: 0
    cout << kthGrammar(2, 2) << endl;  // Output: 1
    cout << kthGrammar(4, 5) << endl;  // Output: 1
    return 0;
}

/* recursion
int kthGrammar(int n, int k) {
        if(n==1) return 0;
        if(k%2==0){//flip
            int prevAns = kthGrammar(n-1,k/2);
            if(prevAns==0) return 1;
            else return 0;
        }
        else{//same
            int prevAns = kthGrammar(n-1,k/2+1);
            return prevAns;
        }
    }
*/
