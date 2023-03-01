#include <iostream>
using namespace std;
class vehicle // class
{
public:        // access specifier
    int speed; // data members
    string colour;
    void drive() // member functions
    {
        cout << "Drive your car\n";
    }
    void stop()
    {
        cout << "Stop your car\n";
    }
};
int main()
{
    vehicle car; // object
    car.drive();
    car.stop();
    return 0;
}