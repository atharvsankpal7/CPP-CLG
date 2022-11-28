#include <iostream>
using namespace std;
class Unary
{
    int a;

public:
    Unary(int x) { a = x; }
    Unary operator-()
    {
        a = -a;
        return 0;
    }
    void display()
    {
        cout << "The value of data after using '-' operator is -->\t" << a << endl;
    }
};
class complex
{
    int real;
    int img;

public:
    complex(int a = 0, int b = 0)
    {
        real = a;
        img = b;
    }
    complex operator+(const complex &obj)
    {
        complex result;
        result.real = real + obj.real;
        result.img = img + obj.img;
        return result;
    }
    void display()
    {
        cout << "The sum of these two complex numbers is " << real << " + " << img
             << "i" << endl;
    }
};
class Increament
{
    int a;

public:
    Increament() {}
    Increament(int x) { a = x; }
    Increament operator++()
    {
        a += 1;
        return a;
    }
    void display()
    {
        cout << "The value of the data after increament is " << a << endl;
    }
};
class Decreament
{
    int a;

public:
    Decreament() {}
    Decreament(int x) { a = x; }
    Decreament operator--()
    {
        a -= 1;
        return a;
    }
    void display()
    {
        cout << "The value of the data after decreament is " << a << endl;
    }
};
int main()
{
    Unary obj1(10), obj2(-20);
    -obj1;
    -obj2;
    obj1.display();
    obj2.display();
    complex o1(15, -6), o2(3, 9);
    complex o3 = o1 + o2;
    o3.display();
    Increament o4(10);
    ++o4;
    o4.display();
    Decreament o5(20);
    --o5;
    o5.display();
}