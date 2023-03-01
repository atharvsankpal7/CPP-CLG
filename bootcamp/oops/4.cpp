#include <iostream>
using namespace std;
class car
{
public: // access specifier
    void accelarate(int spd)
    {
        cout << "Your car is moving with " << spd << " speed \n";
    }
};
class vehicle
{
public: // access specifier
    void drive(car c, int speed)
    {
        cout << "Drive your car fast\n";
        c.accelarate(speed);
    }
};
int main()
{
    vehicle v;
    car c;
    v.drive(c, 100);
    return 0;
}