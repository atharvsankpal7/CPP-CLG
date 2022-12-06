#include <iostream>
using namespace std;
class base
{
    int a, b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << a << " " << b << endl;
    }
};
class derived : public base
{
    int k;

public:
    derived() {}
    derived(int z)
    {
        k = z;
    }
    void displayk()
    {
        cout << k << endl;
    }
};
int main()
{
    derived o1(10);
    o1.setdata(11, 12);
    o1.display();
    o1.displayk();

    return 0;
}