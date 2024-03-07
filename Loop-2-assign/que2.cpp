// #include <bits/stdc++.h>
// using namespace std;
// int main( ) {
// int t = 10;
// while (t /= 2) {
// cout << "Hello" << endl;
// }
// }
/*
#include <bits/stdc++.h>
using namespace std;
int main( ) {
for (int x = 1; x * x <= 10; x++)
cout << "In for loop" << endl;
}


#include<iostream>
using namespace std;
int main(){
    for (int i = 1; i <= 100; i+=2)
    {
        cout<<i<<endl;
    }
    
}


#include<iostream>
using namespace std;
int main(){
    for (int i = 0; i <=100; i++)
    {
        if (i%2!=0)
        {
           cout<<i<<endl;
        }}}  


#include<iostream>
using namespace std;
int main(){
    for (int i = 1; i <=100; i++)
    {
        if (i%2==0) continue;
        cout<<i<<endl;
    }
    
}

#include<iostream>
using namespace std;
int main(){
    //Method-1
    //  for (int i = 1; i <= 100; i++){
    //     if (i%3==0){
    //     cout<<i<<endl;}}
 
    //Method-2
    for (int i = 0; i <= 100; i+=3)
    {
        cout<<i<<endl;
    }

}
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    bool flag = true; // true means prime
    for (int i = 2; i <=n; i++)
    {
        if (n%i==0)// i is the factor of n;
        {
            flag = false;//false means composite
            break;
        }
    }
    if(n==1) cout<<"1 is neither prime nor composite";
    else if(flag==true) cout<<n<<" is Prime";
    else cout<<n<<" is composited";
}

