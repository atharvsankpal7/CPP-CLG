#include <iostream>
using namespace std;
class vehicle
{
public:
    int speed, id;
    vehicle()
    {
        id = 1;
        speed = 80;
    }
    vehicle(int spd)
    {
        id = 2;
        speed = spd;
    }
    vehicle(vehicle &c)
    {
        id = 3;
        speed = c.speed;
    }
    void display()
    {
        cout << speed << endl;
    }
    ~vehicle()
    {
        cout << "Dectructor is called and the id of the object is " << id << endl;
    }
};
int main()
{
    vehicle a;
    a.display();
    vehicle a2(32);
    a2.display();
    vehicle a3(a2);
    a3.display();

    return 0;
}