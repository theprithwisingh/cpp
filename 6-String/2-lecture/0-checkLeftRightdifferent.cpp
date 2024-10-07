// #include <iostream>
// #include <string>

// using namespace std;

// int countDifferentNeighbours(const string& s) {
//     int n = s.length();
    
//     // Check if length is 1, terminate early
//     if (n == 1) {
//         cout << "String length is 1, no neighbouring characters to compare." << endl;
//         return 0;
//     }

//     int count = 0;
//     for (int i = 1; i < n; i++) {
//         if (s[i] != s[i - 1]) {
//             count++;
//         }
//     }
//     return count;
// }

// int main() {
//     string s;
//     cout << "Enter a string: ";
//     cin >> s;

//     int result = countDifferentNeighbours(s);

//     // Only print if result is greater than 0
//     if (result > 0) {
//         cout << "Number of times neighbouring characters are different: " << result << endl;
//     }

//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;

int countDifferentNeighbours(const string& s) {
    int n = s.length();
    
    // If string has less than 2 characters, no neighbours exist
    if (n < 2) {
        cout << "String has no valid neighbouring characters to compare." << endl;
        return 0;
    }

    int count = 0;
    
    // Traverse through the string, checking both left and right neighbours
    for (int i = 0; i < n; i++) {
        bool leftCheck = (i > 0 && s[i] != s[i - 1]);  // Check left neighbour
        bool rightCheck = (i < n - 1 && s[i] != s[i + 1]);  // Check right neighbour
        
        if (leftCheck || rightCheck) {
            count++;
        }
    }
    return count;
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    int result = countDifferentNeighbours(s);

    cout << "Number of times characters differ from their neighbours: " << result << endl;

    return 0;
}
