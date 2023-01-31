#include <iostream>
using namespace std;
class convert
{
public:
    double value1;
    double value2;
    convert(double value)
    {
        value1 = value;
    }
    virtual void calc() = 0;
};
class temperature : public convert
{
public:
    temperature(double i) : convert(i) {}
    void calc()
    {
        value2 = ((value1 -32)*5)/9;
    }
};
class liquid_storage : public convert
{
public:
    liquid_storage(double i) : convert(i) {}
    void calc()
    {
        value2 = (value1)*3.78541;
    }
};
int main()
{
    liquid_storage s1(5.62);
    s1.calc();
    cout << s1.value1 << " liters to gallons is " << s1.value2 << endl;
    temperature s2(322);
    s2.calc();
    cout << s2.value1 << " fahrenheit to celcius is " << s2.value2 << endl;
    return 0;
}