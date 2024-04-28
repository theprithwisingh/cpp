#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&a){
for (int i = 0; i < a.size(); i++){
    cout<<a[i]<<" ";
}
cout<<endl;
}
int main(){
 vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    display(v);//1 2 3 4 5 6

    int i = 0;
    int j = v.size()-1;
    while (i<=j)
    {
      int temp  = v[i];
      v[i]=v[j];
      v[j] = temp;

      i++;
      j--;
    }
    display(v);//6 5 4 3 2 1

        
    for (int i=0, j= v.size()-1 ; i <= j; i++,j--)
    {
     int temp  = v[i];
      v[i]=v[j];
      v[j] = temp; 
    }
    display(v);//1 2 3 4 5 6

    
}