#include <iostream>
using namespace std;
class c
{
private:
    int x;

public:
    void setX(int x)
    {
        this->x = x;
    }
    void print()
    {
        cout << "The value of x is :" << x;
    }
};
int main()
{
    c a;
    a.setX(0100);
    a.print();
    return 0;
}