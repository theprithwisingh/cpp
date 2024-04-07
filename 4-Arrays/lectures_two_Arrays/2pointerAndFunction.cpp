#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,2,6,1,7};
    int* ptr  = arr;

    cout<<*ptr<<endl;


    for (int i = 0; i <=4; i++)
    {
    cout<<ptr[i]<<" ";
    }
    cout<<endl;

    // *ptr = 8;//ptr[0]=8
    // ptr++; //ptr is pointing to 2nd element
    // *ptr=9; //
    // ptr--; //ptr ispointing to 1st element

    for (int i = 0; i <= 4; i++)
    {
        cout<<*ptr<<" ";
        ptr++;
    }
}