#include<iostream>
#include<climits>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max = INT_MIN; // Initialize max to smallest possible integer
    for (int i = 0; i < n; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }

int smax = INT_MIN;
for (int i = 0; i <= n-1; i++)
{
    if (arr[i]!=max && smax<arr[i]) smax=arr[i];
}
    cout<<max<<endl;
    cout<<smax<<endl;
}