#include<iostream>
using namespace std;
int main(){
    //it is right;
    int x;
    int y;
    int x,y;

    //it is wrong;
    int* p1 = &x;
    int* p2 = &y;
    int* p1 = &x,p2 = &y;
}