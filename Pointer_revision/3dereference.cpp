//Dereferencing a pointer means accessing the value stored at the memory address pointed to by that pointer.
#include<iostream>
using namespace std;
int main(){
    int x = 122;
    int* p = &x;
    cout<<*p;
}

// P ke andar jo address rakha hai, us adress pe jao, and vahaa ki value print kr do.

// pointer se value access krna 

/*{int x;
int* p = &x;
cin>>*p;
cout<<x;
}*/