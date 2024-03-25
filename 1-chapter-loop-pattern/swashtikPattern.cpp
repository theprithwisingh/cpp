//*  ****
//*  *
//*  *
//*******
//   *  *
//   *  *
//****  *

// Include header file
#include <iostream>
using namespace std;
class MyPattern
{
    public:
        // Displaying of swastika Pattern in given size
        void swastikaPattern(int size)
        {
            if (size <= 3 || size % 2 == 0)
            {
                // When get a invalid size of pattern
                return;
            }
            cout << "\n Size : " << size << "\n\n";
            for (int i = 0; i < size; ++i)
            {
                for (int j = 0; j < size; ++j)
                {
                    // Simple test the boundary cases
                    if ((i < size / 2 && j == 0) || 
                        (j == size / 2) ||
                        (i == size / 2) || 
                        (i == 0 && j > (size / 2)) || 
                        (i == size - 1 && j < size / 2) || 
                        (i > size / 2 && j == size - 1))
                    {
                        cout << " *";
                    }
                    else
                    {
                        cout << "  ";
                    }
                }
                //include new line
                cout << "\n";
            }
        }
};
int main()
{
    MyPattern *task = new MyPattern();
    task->swastikaPattern(11);
    return 0;
}