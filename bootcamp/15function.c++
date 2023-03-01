#include <iostream>
using namespace std;
int get(int &x)
{
    x = 7;
    cout << "The value of x (as parameter) is " << x << endl;
}
int main()
{
    int a = 799;
    get(a);
    cout << a << endl;
    return 0;
}