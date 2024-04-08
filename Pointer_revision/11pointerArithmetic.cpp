/* preincreament
#include<iostream>
using namespace std;
int main(){
    int a = 15;
    int *ptr = &a;
    int b = ++(*ptr);
    //int b = ++(*ptr); also this right
    cout<<a<<' '<<b;
}
*/
//post-increament
#include<iostream>
using namespace std;
int main(){
    int a = 15;
    int *ptr = &a; 
    int b =(*ptr)++;
    //int b = ++(*ptr); also this right
    cout<<a<<' '<<b;
}