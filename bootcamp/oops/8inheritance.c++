#include <iostream>
using namespace std;
class vehicle
{
private:
    void v1()
    {
        cout << "Vehicle but private" << endl;
    }

protected:
    void v2()
    {
        cout << "Vehicle but protected" << endl;
    }

public:
    void v()
    {
        cout << "This is vehicle" << endl;
    }
};
class car : public vehicle
{
public:
    void car_function()
    {
        cout << "car is vehicle \n";
    }
};
class audi : public car
{
};
int main()
{
    audi c;
    c.v();
    c.car_function();
    return 0;
}