#include<iostream>
using namespace std;
void display(int a[],int size){
    for (int i = 0; i <=size-1; i++)
    {
        cout<<a[i]<<" ";
    }
    return;
}

void change(int b[],int size){
    b[0]=100;
}

int main(){
    int arr[5]={1,2,3,4,67};
    int size  = sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;
    //accesing the elements of array in another funcion
    // updation pass by value / reference
    display(arr,size);
    change(arr,size);
    display(arr,size);
}