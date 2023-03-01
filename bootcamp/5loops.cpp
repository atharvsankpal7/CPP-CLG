#include <iostream>
using namespace std;

int main()
{
    int i = 0, j = 0;
    /*    loops are of two type entry control and exit control
        `while` and `for` loops are the entry control loops
        `do-while` loop is exit control loop.
        when we know the number of the iterations we use `for` loop and when we don't know the number of interations we use while loops.
        `do-while` loop runs atleast one
      */

    // while loop.
    while (i < 11)
    {
        cout << i << " ";
        i++;
    }
    cout << endl;

    while (j < 11)
    {
        j++;
        cout << j << " ";
    }
    cout << endl;

    // for loop.
    for (int j = -5; j < 10; j++)
    {
        cout << j << " ";
    }
    j = 1;
    // nested while in for loop
    while (j < 11)
    {
        for (int i = 1; i <= 10; i++)
        {
            cout << "i = " << i << " "
                 << "j = " << j << endl;
        }
        cout << endl;
        j++;
    }

    return 0;
}