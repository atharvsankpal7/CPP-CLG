#include <iostream>
using namespace std;
class complex
{
public:
    int x, y;
    complex() {}
    complex(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
};
complex obj3(complex o1, complex o2)
{
    int x = o1.x + o2.x;
    int y = o1.y + o2.y;
    complex c4(x, y);
    return (c4);
}
int add(int a, int b)
{
    return (a + b);
}
float add(float a, float b)
{
    return (a + b);
}
int main()
{
    complex c1(20, 3);
    complex c2(32, 63);
    complex c3 = obj3(c1, c2);
    cout << c3.x << " " << c3.y << endl;

    return 0;
}