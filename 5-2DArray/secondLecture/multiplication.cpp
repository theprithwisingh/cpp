#include<iostream>
using namespace std;
int main(){
    int m, n, p, q;
   //1st matrix
    cout << "Enter the number of 1st matrix's rows: ";
    cin >> m;
    cout << "Enter the number of 1st matrix's columns: ";
    cin >> n;
    
    //2nd matrix
    cout << "Enter the number of 2nd matrix's rows: ";
    cin >> p;
    cout << "Enter the number of 2nd matrix's columns: ";
    cin >> q;

    if (n != p) {
      cout << "Multiplication is not possible because the number of columns in the first matrix is not equal to the number of rows in the second matrix.";
    return 0;
    }

    // declare matrix
    int a[m][n], b[p][q], res[m][q];
    
    cout << "Enter elements of the 1st matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    
    cout << "Enter elements of the 2nd matrix:" << endl;
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            cin >> b[i][j];
        }
    }

    // // Initialize result matrix to 0
    // for (int i = 0; i < m; i++) {
    //     for (int j = 0; j < q; j++) {
    //         res[i][j] = 0;
    //     }
    // }

    // Matrix multiplication
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            for (int k = 0; k < n; k++) {
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    cout << "Resultant matrix after multiplication:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
/*
#1
Enter the number of 1st matrix's rows: 2
Enter the number of 1st matrix's columns: 5
Enter the number of 2nd matrix's rows: 4
Enter the number of 2nd matrix's columns: 6
Multiplication is not possible because the number of columns in the first matrix is not equal to the number of rows in 
the second matrix.

#2
Enter the number of 1st matrix's rows: 2
Enter the number of 1st matrix's columns: 3
Enter the number of 2nd matrix's rows: 3
Enter the number of 2nd matrix's columns: 4
Enter elements of the 1st matrix:
1 2 3 4 5 6
Enter elements of the 2nd matrix:
1 2 3 4 5 6 7 8 9 10 11 12
Resultant matrix after multiplication:
38 44 50   56
83 98 113  128
*/ 