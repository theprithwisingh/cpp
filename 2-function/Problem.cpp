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
/*
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
*/ 
/*
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i = 0; i <=n; i++)
    {
      for (int j = 0; j <=i; j++)
      {
        cout<<j;
      }
      cout<<endl;
    }  
}
*/ 
/*
#include<iostream>
using namespace std;

int facto(){
 int n;
   cin>>n;
   int f = 1;
   for (int i = 2; i <=n; i++)
   {
    f*=i;
   }
   return f;
}
int combi(){
   
}
int permu(){

}

int main(){
    int n;
    cin>>n;
    for (int i = 0; i <= n; i++)
    {
     for (int j = 0; j <= i; j++)
     {
        cout<<(i,j);
     }
     cout<<endl;
    }
    
}
*/
#include<iostream>
using namespace std;

    int fun(int x = 2, bool y = true){
      cout<<x<<"  "<<y;
    }

   int main(){
   fun(3,1);
   }
