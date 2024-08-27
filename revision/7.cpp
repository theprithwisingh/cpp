#include <bits/stdc++.h>
using namespace std;

// Function to find and print pair
bool chkPair(int A[], int size, int x)
{
    for (int i = 0; i < (size - 1); i++) {
        for (int j = (i + 1); j < size; j++) {
            if (A[i] + A[j] == x) {
                cout<<i<<" "<<j<<" , ";
            }
        }
    }

    return 0;
}

int main()
{
    int A[] = { 1, 2, 3, 0 };
    int x = 3;
    int size = sizeof(A) / sizeof(A[0]);
    chkPair(A, size, x);
}
