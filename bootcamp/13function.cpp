#include <iostream>
using namespace std;
float square(float a = 0)
{
    return a * a;
}
int main()
{
    cout << "The square of the 5.321 is " << square(5.321) << endl;

    return 0;
}