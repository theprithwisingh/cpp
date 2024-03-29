//non function method
/*
#include <iostream>
using namespace std;

int main(){
   int n;
   cout<<"Enter n: ";
   cin>>n;
   int r;
   cout<<"Enter r: ";
   cin>>r;
   int nfact = 1;
   for(int i = 2; i<=n; i++){
    nfact*=i;
   }
   
   int rfact = 1;
   for(int i = 2; i<=r; i++){
    rfact*=i;
   }
      
   int nrfact = 1;
   for(int i = 2; i<=n-r; i++){
    nrfact*=i;
   }

   int nCr = nfact/(rfact*nrfact);
   cout<<nCr;

}
*/  




//using function method-1
/*
#include <iostream>
using namespace std;
int fact(int x){
    int f = 1;
    for (int i = 2; i <=x; i++)
    {
        f*=i;
    }
    return f;
}
int main(){
   int n;
   cout<<"Enter n: ";
   cin>>n;
   int r;
   cout<<"Enter r: ";
   cin>>r;
   
   int nfact = fact(n);
   int rfact = fact(r);
   int nrfact =fact(n-r);
  
   int nCr = nfact/(rfact*nrfact);
   cout<<nCr;

}
*/
//using function method-2
#include <iostream>
using namespace std;
int fact(int x){
    int f = 1;
    for (int i = 2; i <=x; i++)
    {
        f*=i;
    }
    return f;
}
int combination(int n, int r){
    int nCr = fact(n)/(fact(r)*fact(n-r));
    return nCr;
}
int permutation(int n, int r){
    int nPr = fact(n)/fact(n-r);
    return nPr;
}

int main(){
   int n;
   cout<<"Enter n: ";
   cin>>n;
   int r;
   cout<<"Enter r: ";
   cin>>r;

   int nCr = combination(n,r);
   int nPr=  permutation(n,r);
   cout<<"Combination: "<<nCr<<endl;
   cout<<"Permutation: "<<nPr;
}
