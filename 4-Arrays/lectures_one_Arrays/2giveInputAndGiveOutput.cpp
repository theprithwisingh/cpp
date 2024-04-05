/*
#include<iostream>
using namespace std;
int main(){
  int arr[7];
  for (int i = 0; i <=6; i++)
  {
    cin>>arr[i];
  }

  for (int i = 0; i <= 6; i++)
  {
    cout<<arr[i];
  }
}
*/

#include<iostream>
using namespace std;
void numberToArray(int num) {
    // Extract digits from the number and store them in the array
        int arr;
      while(num > 0) {
        int digit = num % 10;
        arr.insert(arr.begin(), digit); // Insert at the beginning to maintain order
        num /= 10;
    }

    return arr;
}
int main(){
int number;
    cout << "Enter a number: ";
    cin >> number;

    int arr = numberToArray(number);

    cout << "Array form of the number: ";
    for(int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }
    cout<<endl;

    return 0;
}
