#include <iostream>
using namespace std;
class a
{
public:
    a()
    {
        cout << "This is class a" << endl;
    }
    void a_function()
    {
        cout << "This is function of a" << endl;
    }
};
class b : virtual public a
{
public:
    b()
    {
        cout << "This is class b" << endl;
    }
};
class c : virtual public a
{
public:
    c()
    {
        cout << "This is class c" << endl;
    }
};
class d : public b, public c
{
public:
    d()
    {
        cout << "This is class d" << endl;
    }
};
int main()
{
    // the consturctor of class `a` is called two times first due to class `b` and second due to class `c`
    // but if we use virtual the constructor will be called only one at first
    d o1;
    // o1.a_function();
    return 0;
}