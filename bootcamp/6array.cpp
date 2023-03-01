#include <iostream>
using namespace std;

int main()
{
    int marks[5];
    marks[0] = 2.12; // This number is `float` but will be converted into `intn` when the memory is written
    cout << "Enter the marks" << endl;
    for (int i = 1; i < 5; i++)
    {
        cin >> marks[i];
    }
    cout << "The marks are --> ";
    for (int i = 0; i < 5; i++)
    {
        cout << marks[i] << " ";
    }
    cout << endl;
    int array[] = {1, 2, 3, 4, 5};
    cout << "The array is --> ";
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << " ";
    }
    /*
    Array Properties:
    1.Have similar data type elements
    2.Stored at continuous memory locations
    3.We can declare array of any size(less than memory size).
    */
    return 0;
}
