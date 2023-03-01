#include <iostream>
using namespace std;

int main()
{
    int array[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "value :";
        cin >> array[i];
    }
    int key, flag = 0;
    cout << "Enter the value that you want to search : ";
    cin >> key;
    int i = 0;
    for (; i < 10; i++)
    {
        if (key == array[i])
        {
            cout << "The value is present at " << i + 1 << "th position " << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "The value is not present in the array " << endl;
    }

    return 0;
}