#include <iostream>
using namespace std;
class father
{
public:
    father()
    {
        cout << "Tall" << endl;
    }
};
class mother
{
public:
    mother()
    {
        cout << "Smart" << endl;
    }
};
class child : public father, mother // the constructor will be called in the order of the inheritance
{
};
int main()
{
    child c;
    return 0;
}