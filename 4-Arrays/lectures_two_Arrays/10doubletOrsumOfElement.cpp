#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    cout<<"ENTER THE TARGET NUM :";
    cin>>x;

    vector<int>v;
    int n;
    cout<<"ENTER ARRAY SIZE :";
    cin>>n;

    cout<<"ENTER ARRAY ELEMENT  : ";
    for (int i = 0; i < n; i++)
    {
        int q;
        cin>>q;
        v.push_back(q);//vector array
    }
   
    for (int i = 0; i <=v.size()-1; i++)
    {
     for (int j =i+1; i <=v.size()-1; i++)
     { if (v[i]+v[j]==x){
        cout<<"("<<i<<","<<j<<")"<<endl;
        }
      }
    }
}