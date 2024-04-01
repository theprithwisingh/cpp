#include<iostream>
using namespace std;
int main(){
    int n;//number of the students
    cout<<"Enter the number of the students :";
    cin>>n;
    int marks[n];
    cout<<"Enter the Marks of the students :" ;
    for (int i = 0; i <=n-1; i++)
    {
        cin>>marks[i];
    }
    for (int i = 0; i <=n-1; i++)
    {
        if (marks[i]<35)
        {  
            cout<<marks[i]<<" "<<endl;
        }
        
    }
    
}