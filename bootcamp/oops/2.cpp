#include <iostream>
using namespace std;
class vehicle
{
public:
    int speed = 230, distance = 2000, time;
    void calculate()
    {
        time = distance / speed;
    }
};
int main()
{
    vehicle supra;
    supra.calculate();
    cout << supra.time;
    return 0;
}