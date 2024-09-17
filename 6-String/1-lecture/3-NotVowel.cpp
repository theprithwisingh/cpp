#include<iostream>
#include<String>
using namespace std;
int main(){
string str = "engineer prithwi singh chauhan";
int Vcount = 0;
int Ccount = 0; 
int i = 0;
while (str[i]!='\0'){
   if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
   Vcount++;
   }
   else{
    Ccount++;
   }
   i++;
}
cout<<Vcount<<" - "<<Ccount;
}