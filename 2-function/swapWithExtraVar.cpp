/*
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b; 
    a = a + b;
    b = a - b;
    a = a - b;
cout<<a<<" "<<b; 
}
*/

//function
#include<iostream>
using namespace std;

void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
};

int main(){
    int a, b;
    cin >> a >> b;
    swap(a, b);
    cout << a << "  " << b;
}