#include <iostream>
using namespace std;

int main() {
     int n;
     cout << "Enter the num: ";
     cin >> n;
     int a=0;
     int b=1;
     int nextT=0;
     for (int i = 0; i <= n; i++)
     {
        if (i==1){
         cout<<a<<", ";
         continue;
        }
        if (i==1){
         cout<<a<<", ";
         continue;
        }
        nextT=a+b;
        a=b;
        b=nextT;

        cout<<nextT<<", ";
     }
     return 0;
}

