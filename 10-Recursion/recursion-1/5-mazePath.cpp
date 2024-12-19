#include <iostream>
using namespace std;

int maze(int sr, int sc, int er, int ec) {
    // Base case: out of bounds
    if (sr > er || sc > ec) return 0;

    // Base case: reached the destination
    if (sr == er && sc == ec) return 1;

    // Recursively calculate the number of ways by moving right and down
    int rightWays = maze(sr, sc + 1, er, ec);
    int downWays = maze(sr + 1, sc, er, ec);

    return rightWays + downWays;
}

void printPath(int sr, int sc, int er, int ec, string s) {
    // Base case: out of bounds
    if (sr > er || sc > ec) return;

    // Base case: reached the destination
    if (sr == er && sc == ec) {
        cout << s << endl;  // Print the current path
        return;
    }

    // Move right and add 'R' to the path
    printPath(sr, sc + 1, er, ec, s + "R");

    // Move down and add 'D' to the path
    printPath(sr + 1, sc, er, ec, s + "D");
}

int main() {
    // Print the number of ways
    cout << "Number of ways to reach the destination: " << maze(1, 1, 4, 4) << endl;

    // Print all paths to reach the destination
    cout << "Paths to reach the destination: " << endl;
    printPath(0, 0, 2, 2, "");

    return 0;
}
