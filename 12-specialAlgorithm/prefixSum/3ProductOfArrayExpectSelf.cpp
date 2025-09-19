// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> productOfArrayExceptSelf(vector<int>& nums) {
//     int n = nums.size();
//     vector<int> res(n);

//     for (int i = 0; i < n; i++) {
//         int prod = 1;
//         for (int j = 0; j < n; j++) {
//             if (i != j) prod *= nums[j];
//         }
//         res[i] = prod;
//     }

//     return res;
// }

// int main() {
//     vector<int> arr = {-1, 1, 0, -3, 3};
//     vector<int> result = productOfArrayExceptSelf(arr);

//     //result
//     for (int x : result) {
//         cout << x << " ";
//     }
//     cout << endl;

//     return 0;
// }


#include <iostream>
using namespace std;

int main(){
  int n;
  cout<<"Enter the number ; ";
  cin>>n;
   
  for (int i = 1; i <= n; i++){
     for (int j = 1; j <= i; j++)
     {
      cout<<i;
     }
     cout<<endl;
  }
}
