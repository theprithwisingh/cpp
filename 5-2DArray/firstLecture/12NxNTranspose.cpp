#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={1, 2, 3, 4, 5, 6, 7, 8, 9};
    int t[3][3];

    for (int i = 0; i <=2; i++){
        for (int j = 0; j <=2; j++)
        {
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    } 

//Transposing 
    for (int i = 0; i <=2; i++){
        for (int j = 0; j <=2; j++)
        {
           t[j][i]=arr[i][j]; 
        }
    }
cout<<"Printing Transpose"<<endl;
    for (int i = 0; i <=2; i++){
        for (int j = 0; j <=2; j++)
        {
           cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
}