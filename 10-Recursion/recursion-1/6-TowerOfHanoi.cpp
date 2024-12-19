// // C++ recursive function to
// // solve tower of hanoi puzzle
// #include <bits/stdc++.h>
// using namespace std;

// void towerOfHanoi(int n, char from_rod, char to_rod,char aux_rod)
// {
//     if (n == 0) {
//         return;
//     }
//     towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
//     cout << "Move disk " << n << " from rod " << from_rod
//          << " to rod " << to_rod << endl;
//     towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
// }

// // Driver code
// int main()
// {
//     int N = 2;

//     // A, B and C are names of rods2
//     towerOfHanoi(N, 'A', 'C', 'B');
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;
void hanoi(int n,char a,char b,char c){
 hanoi(n-1,a,c,b);
 cout<<a<<"->"<<c;
 hanoi(n-1,a,c,b);
}
int main()
{
    int n= 2;

    // A, B and C are names of rods2
    hanoi(n, 'a', 'b', 'c');
    return 0;
}
