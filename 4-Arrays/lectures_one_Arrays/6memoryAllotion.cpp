#include<iostream>
using namespace std;
int main(){
    int arr[5];
     cout<<&arr[0]<<endl;
     cout<<&arr[1]<<endl;
     cout<<&arr[2]<<endl;
     cout<<&arr[3]<<endl;
     cout<<&arr[4]<<endl;
}
//0x61fefc
//0x61ff00
//0x61ff04
//0x61ff08
//0x61ff0c

//where elememt having 4bytes gap
/*

int arr[3] = {1,2,3} //o/p-> 0x16f34f3d8
cout<<arr;
// In this case , i have to geting not whole array, but i have get first index memory address
*/