#include <iostream>
using namespace std;

int main()
{
    int a, size = 0, temp;
    cout << "Enter the number -->\n";
    cin >> a;
    temp = a;
    while (a != 0)
    {
        a /= 10;
        size++;
    }
    int arr[size];
    int *p = arr;
    int *p1 = arr;
    for (int i = 0; i < size; i++)
    {
        *p = temp % 10;
        p++;
        temp /= 10;
    }
    cout << "The number after reversing is -->\n";
    for (int i = 0; i < size; i++)
    {
        cout << *p1;
        p1++;
    }
    return 0;
}