/*
#include<iostream>
using namespace std;

int main() {
    int arr[] = {23,34,45,67,78,79,70,34,11,12,13,14,15,16,18};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<n<<endl;

    for(int i = 0; i < n; i++) {
        cout << arr[i]<<",";
    }

    return 0;
}
*/
/*
#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

bool divide(vector<int>& arr) {
    int total_sum = 0, prefix = 0, n = arr.size();

    for (int i = 0; i < n; i++)
        total_sum += arr[i];
        cout<<total_sum<<endl;
    for (int i = 0; i < n - 1; i++) {
        prefix += arr[i];
        int remaining = total_sum - prefix;

        if (prefix == remaining) {
            cout << "1" << endl;
            return true;
        }
    }

    return false;
}

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter the elements in array: ";
    for (int i = 0; i < n; i++) cin >> v[i];

    cout << "Given array: ";
    for (int i = 0; i < n; i++) cout << v[i] << " ";
    cout << endl;

    if (!divide(v)) cout << "0" << endl;

    return 0;
}
*/
#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

     
bool canBePartitioned(vector<int>& arr) {
    int n = arr.size();
    vector<int> pre(n);

    //prefix sum array
    pre[0] = arr[0];
    for (int i = 1; i < n; i++) {
        pre[i] = pre[i - 1] + arr[i];
    }

    // check for any index x where 2 * pre[x] == pre[n - 1]
    for (int i = 0; i < n - 1; i++) {
        if (2 * pre[i] == pre[n - 1]) {
            return true;  /
        }
    }

    return false; 
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    
    cout << "Enter the elements in array: "<<endl;
    for(int i=0; i<n;i++)cin>>v[i];

    cout<<"Answer : "<<canBePartitioned(v);
    
}