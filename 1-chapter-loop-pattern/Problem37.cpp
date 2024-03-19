#include<iostream>
using namespace std;

int main()
{
	int i, j, k, rows;
     
    cout << "Enter Pattern Row = ";
    cin >> rows;

    cout << "Star Pattern\n"; 

    for(i = 1; i <= rows; i++)
    {
    	for(j = 1; j <= rows - i; j++)
		{
            cout << " ";
        }
        for(k = 1; k <= rows; k++)
        {
            cout << "*";
        }
        cout << "\n";
    }		
 	return 0;
}