#include <iostream>
using namespace std;
void ge(int n)
{
    if (n < 5) 
    {
        cout << "Good Evening!!" << endl;
        n++;
        ge(n);
    }
}
int main()
{
    ge(0);
    return 0;
}