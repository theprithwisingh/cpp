/*
#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    //ALGORITHM
        reverse(arr,arr+10);

      for (int i = 0; i <10; i++){
       cout<<arr[i]<<" ";   
 }
 cout<<endl;
}
*/
/*
#include<iostream>
using namespace std;
void reverseArray(int arr[],int start, int end){
while(start<end){
  int temp = arr[start];
  arr[start] = arr[end];
  arr[end] = temp;
  start++;
  end--;
  return reverseArray(arr, start + 1, end - 1);
}
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
}
int main(){
  int arr[] = {1,2,3,4,5,6,7,8};
  int size = sizeof(arr)/sizeof(arr[0]);

  reverseArray(arr,0,size+1);

  cout<<"reverseArray : ";
  for (int i = 0; i < size; i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}*/


#include<iostream>
using namespace std;
void reverseArray(int arr[], int start, int end)
{
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

/* Utility function to print an array */
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
}

/* Driver function to test above functions */
int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);
    reverseArray(arr, 0, n - 1);
    cout << "Reversed array is" << endl;
    printArray(arr, n);
    return 0;
}
