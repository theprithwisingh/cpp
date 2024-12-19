/*
#include<iostream>
using namespace std;
void print(int n){
  //base case
  if(n==0) return;
  cout<<n<<endl;
  print(n-1);   
}
int main(){
    print(6);
}*/
/*
#include<iostream>
using namespace std;
void print(int n){
   int i=1;
   while(i<=n){
     cout<<i<<endl;
     i++;
   }  
}
int main(){
    print(6);
}
*/
/*
#include<iostream>
using namespace std;
void print(int i, int n){
    while(i<=n){
        cout<<i;
        i++;
    }
}
int main(){
    int n;
    cin>>n;
    print(1,n);
}*/

/*
#include<iostream>
using namespace std;
void print(int i, int n){
    if(i>n) return;
    cout<<i<<endl;
    print(i+1, n);
}
int main(){
    int n;
    cin>>n;
    print(3,n);
}*/

#include<iostream>
using namespace std;
void print(int n){
    if(n==0)return;
    print(n-1);
    cout<<n<<endl;
}
int main(){
    print(6);
}