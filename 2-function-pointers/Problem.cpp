/*
#include <iostream>
#include <string>
using namespace std;

    int main(){
        int a;
        for (int k = 0; k <= a; k++)
        {   
            cin>>a;
            for (int i = 0; i <= a; i++)
            {
                for (int j = 0; j <=i; j++)
                {
                    cout<<"*";
                } 
            cout<<endl;
            }
        }
    }
*/ 

#include <iostream>
using namespace std;
void starTri(int x){
    for (int i = 1; i <=x; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}
int main(){
    starTri(3);
        starTri(4);
            starTri(5);
}
