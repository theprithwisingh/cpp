/* */
/*
#include<iostream>
#include<String>
using namespace std;
int main(){
    char str[]={'p','r','i','t','h','w','i'};
    cout<<str;//prithwi♀ a
    cout<<str<<endl;//prithwi
}
*/
/*
#include<iostream>
#include<String>
using namespace std;
int main(){
    char str[]={'p','r','i','t','h','w','i'};
    cout<<str<<endl;

    int arr[]={1,2,4,5};
    cout<<arr;
}
//Yeh part sahi hai. cout str ko string ke roop mein print karta hai, lekin kyunki str array mein null terminator ('\0') nahi hai, to cout additional characters print kar sakta hai jo memory ke agle parts mein stored hote hain. Yeh unwanted characters print hote hain jo aapne dekha "prithwi0→@".
*/


// #include<iostream>
// #include<String>
// using namespace std;
// int main(){
//     char str[]={'p','r','i','t','\0','h','w','i'};
//     cout<<str<<endl;//prit
// }

#include<iostream>
#include<String>
using namespace std;
int main(){
    string dynamicString = "HELLO" ;
    dynamicString +=" PRITHWI";

    cout<<dynamicString ;
}