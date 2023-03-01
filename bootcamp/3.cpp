#include <iostream>
using namespace std;

int main()
{
    int a = 12;
    // cout << (a) + 10 << endl;
    cout << (a++) + 10 << endl; // a-->12
    cout << a++ << endl;        // a-->13
    cout << a << endl;          // a-->14
    cout << ++a << endl;        // a-->15
    cout << ++a << endl;        // a-->16
    cout << a << endl;          // a-->16
    cout << a++ << endl;        // a-->16
    cout << a << endl;          // a-->17
    return 0;
}