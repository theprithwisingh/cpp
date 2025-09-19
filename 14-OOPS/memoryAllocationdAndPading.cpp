#include <iostream>
using namespace std;

class a {
    // empty class

    //C++ me har object ka ek memory address hota hai.
    //Isliye compiler empty class ka size 1 byte assign karta hai:
   //Har object ka unique address mile.
   //Pointer arithmetic aur arrays properly work kare.
   //sizeof() operator consistent result de.

    //Reason 2: Memory Alignment & Padding
    //C++ me memory alignment rules hote hain.
    //Har data type ka alignment requirement hota hai (int, double, char, etc.)
    // Even empty class me compiler 1 byte allocate karta hai taaki agar aap future me data members add karo ya multiple objects store karo, alignment maintain ho.

};
class b{
    int a;
    char c;

    //Step 1: Check the data members
    //char b → 1 byte
    //int c → usually 4 bytes (on most compilers/32-64-bit systems)
}

int main() {
    a obj1;
    cout << sizeof(obj1) << " "; //output -> 1
    cout<< sizeof(obj2) << " "; //output -> 4 + 1 + 3 -> 8

}

