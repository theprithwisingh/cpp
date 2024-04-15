/*
#include <iostream>
using namespace std;
int main() {
  int x;
  cin>>x;
  int A[5];
  cout<<"Enter 5 elements for the array"<<endl;
   for(int i=0;i<5;i++)cin>>A[i];
   int count = 0;
   for(int i = 0; i < 5; i++){
   for(int j = i + 1; j < 5; j++){
   for(int k = j + 1; k < 5; k++){
   if(A[i] + A[j] == A[k]){
   count++;
    }
  }
 } 
}
cout<<count<<endl;
return 0;
}
*/


#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter the value of x: ";
    cin >> x;

    int A[5];
    cout << "Enter 5 elements for the array: " << endl;
    for (int i = 0; i < 5; i++)
        cin >> A[i];

    int count = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 4; j++) {
            for (int k = j + 1; k < 5; k++) {
                if (A[i] + A[j] + A[k] == x) {
                    count++;
                }
            }
        }
    }

    cout << "Number of triplets whose sum is equal to " << x << ": " << count << endl;

    return 0;
}
