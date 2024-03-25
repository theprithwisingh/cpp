/*
C++ Program 
Display 6 pointed star pattern
*/
#include<iostream>

using namespace std;
class MyPattern
{
    public:
        //include space 
        void space(int size)
        {
            for (int i = 0; i < size; ++i)
            {
                cout << " ";
            }
        }
    //include star 
    void star(int size)
    {
        for (int i = 0; i < size; ++i)
        {
            if (i % 2 == 0)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
    }
    //Function which is displaying a star shape of given side
    void print_star(int side)
    {
        if (side < 3)
        {
            return;
        }
        int i = 0;
        cout << "\n Side Length : " << side << "\n\n";
        //loop which is display the top layer of star pattern
        for (i = 0; i < (side); ++i)
        {
            if (i < side - 1)
            {
                //initial distance using space
                space(side * 2);
                //This is initial space of current position
                space(side - i);
                cout << "*";
                if (i != 0)
                {
                    space(i + i - 1);
                    cout << "*";
                }
            }
            else
            {
                //Include last layer of top section
                space(3);
                star(side * 2);
                space((side - 2) * 2);
                star(side * 2);
            }
            cout << "\n";
        }
        //This is include middle top layer
        for (i = 0; i < (side-1); ++i)
        {
            space(i + 4);
            cout << "*";
            space((side - 1) * 6 - (i + 3 + i));
            cout << "*\n";
        }
        //This is include middle bottom layer
        for (i = 1; i < (side); ++i)
        {
            if (i < side - 1)
            {
                space(side + 2 - i);
                cout << "*";
                space((side - 1) * 4 + (i * 2) - 1);
                cout << "*";
            }
            else
            {
                space(3);
                star(side * 2);
                space((side - 2) * 2);
                star(side * 2);
            }
            cout << "\n";
        }
        //This is include bottom layer
        for (i = 1; i < side; ++i)
        {
            space(3 + (side - 1) * 2 + i);
            cout << "*";
            if (i + 1 != side)
            {
                space((side - 1) * 2 - (i) * 2 - 1);
                cout << "*";
            }
            cout << "\n";
        }
    }
};
int main()
{
    //Make object
    MyPattern obj ;
    //Test Case
    obj.print_star(7);
    return 0;
}
