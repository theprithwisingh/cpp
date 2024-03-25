#include<bits/stdc++.h>
using namespace std;

int main(){

    int rows;
    // Getting the number of rows.
    cout << "Enter the Number of rows - ";
    cin >> rows;

    cout << "Floyd's Triangle of " << rows << " rows." << endl;

    // Main logic to print Floyd's Triangle. 
    int counter = 1; 
    for( int i = 0; i < rows; i++ ) {
        for( int j = 0; j <= i; j++ ){
            cout << (counter++) << " ";
        }
        cout << endl;
    }
    
    return 0;
}
