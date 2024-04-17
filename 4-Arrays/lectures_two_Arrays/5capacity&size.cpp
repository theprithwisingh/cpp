#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    
    /*
    vector<int>v(5);
    cout<<v.size()<<endl;//5
    cout<<v.capacity();//5
    */

    v.push_back(6);//1 1
    v.push_back(1);//2 2
    v.push_back(9);//3 4
    v.push_back(0);//4 4
    v.push_back(6);//5 8
    v.push_back(1);//6 8
    v.push_back(9);//7 8
    v.push_back(0);//8 8
    v.push_back(6);//9 16
    v.push_back(1);//10 16
    v.push_back(9);//11 16
    v.push_back(0);//12 16
    v.push_back(6);//13 16
    v.push_back(1);//14 16
    v.push_back(9);//15 16
    v.push_back(0);//16 16
    v.push_back(0);//17 32
    cout<<"Size is : "<<v.size()<<endl; //17
    cout<<"Capacity/box is : "<<v.capacity()<<endl;//32

    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    cout<<"Size is : "<<v.size()<<endl; //13
    cout<<"Capacity/box is : "<<v.capacity()<<endl;//32
}    