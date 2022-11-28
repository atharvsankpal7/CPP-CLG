#include <iostream>
using namespace std;
class area
{
public:
    area() {}
    area(int r)
    {
        cout << "The area of the circle with radius " << r << " is " << 3.14 * r * r << endl;
    }
    area(int l, int b)
    {
        cout << "The area of rectangle with length " << l << " and breadth " << b << " is " << l * b << endl;
    }
    area(double b, double height)
    {
        cout << "The area of triangle with base " << b << " and " << height << " is " << .5 * b * height << endl;
    }
};
class volume
{
public:
    volume() {}
    volume(float r)
    {
        cout << "The volume of the sphere with radius " << r << " is " << (4 / 3) * 3.142 * r * r * r << endl;
    }
    volume(int r, int h)
    {
        cout << "The volume of the cone with radius " << r << " and height " << h << " is " << 1 / float(3) * 3.142 * r * r * h << endl;

    }
    volume(double r, double h)
    {
        cout << "The volume of the cylinder with radius " << r << " and height " << h << " is " << 3.142 * r * r * h << endl;
    }
};

int main()
{
    area a1(6), a2(3.156, 2.14), a3(2, 4);
    cout << endl;
    volume v1(2.1603), v2(3, 4), v3(3.65, 0.246);

    return 0;
}