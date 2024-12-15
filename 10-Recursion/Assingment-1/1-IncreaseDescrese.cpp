/*
#include<iostream>
using namespace std;
void incDec(int n){
 if(n==0) return;
 cout<<n;
 incDec(n-1);
 cout<<n;
}
int main(){
    incDec(4);
}
*/

#include <iostream>
using namespace std;
// Function to print increasing sequence
void printIncreasing(int current, int n) {
if (current > n) {
return;
}
cout << current << " ";
printIncreasing(current + 1, n);
}
// Function to print decreasing sequence
void printDecreasing(int current) {
if (current < 1) {
return;
}
cout << current << " ";
printDecreasing(current - 1);
}
// Combined function to print increasing and decreasing sequence
void printSequence(int n) {
printIncreasing(1, n);
printDecreasing(n - 1);
cout << endl;

}
int main() {
int n;
cout << "Enter a number: ";
cin >> n;
cout << "Increasing-Decreasing sequence: ";
printSequence(n);
return 0;
}