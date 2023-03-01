#include <iostream>
using namespace std;
#define PI 3.142
class Area
{

public:
    int temp1, temp2;
    double area(double radius)
    {
        return radius * radius * PI;
    }
    double area(float l, float b, int garbage)
    {
        return l * b;
    }
    double area(int b, int h)
    {
        return .5 * b * h;
    }
};

int main()
{
    int a;
    Area obj;
    cout << "Enter Your choice --> " << endl;
    do
    {
        cout << "1.Circle\t2.Rectangle\t3.Triangle\t0.Exit the program\n";
        cin >> a;
        switch (a)
        {
        case 1:
            cout << "Enter the radius of circle\n";
            cin >> obj.temp1;
            cout << "The area of the circle is " << obj.area(obj.temp1) << endl;
            break;
        case 2:
            cout << "Enter the length and breadth of the rectangle respectively\n";
            cin >> obj.temp1 >> obj.temp2;
            cout << "The area of the rectangle is " << obj.area(obj.temp1, obj.temp2, 0) << endl;
            break;
        case 3:
            cout << "Enter the height and base of the triangle\n";
            int temp1, temp2;
            cin >> obj.temp1 >> obj.temp2;
            cout << "The area of the triangle is " << obj.area(obj.temp1, obj.temp2) << endl;
            break;
        case 0:
            cout << "The program has been terminated succesfully...\n";
            break;
        default:
            cout << "Invaid choice !!!" << endl;
        }
    } while (a != 0);

    return 0;
}