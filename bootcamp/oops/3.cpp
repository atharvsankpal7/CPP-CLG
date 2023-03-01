#include <iostream>
using namespace std;
class numbers
{
public:
    int a, b;
    void get(int x, int y)
    {
        a = x;
        b = y;
    }
    void swap()
    {
        // int temp = a;
        // a = b;
        // b = temp;
        // a = a + b;
        // b = a - b;
        // a = a - b;
        a = a * b;
        b = a / b;
        a = a / b;
    }
    void display()
    {
        cout << "a = " << a << "\tb = " << b << endl;
    }
};
int main()
{
    int x, y;
    numbers n;
    cout << "Enter any two numbers -->\n";
    cin >> x >> y;
    n.get(x, y);
    n.swap();
    n.display();
    return 0;
}