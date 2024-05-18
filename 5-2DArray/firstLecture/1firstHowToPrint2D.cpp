// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//     cout<<arr;
//     cout<<arr[1][0];
// }

#include<iostream>
using namespace std;
int main() {
    int arr[3][3] = {
        {2, 1, 3},
        {1, 3, 2},
        {1, 2, 3}
    };

    // Print the elements of the array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
