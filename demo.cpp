#include <iostream>
using namespace std;
class complex
{
    int real = 0;
    int img = 0;

public:
    void getdata()
    {
        cout << "Enter the real part of the number -->" << endl;
        cin >> real;
        cout << "Enter the imaginary part of the number -->" << endl;
        cin >> img;
    }
    complex operator+(const complex &obj)
    {
        complex result;
        result.real = real + obj.real;
        result.img = img + obj.img;
        return result;
    }
    void display()
    {
        cout << "The sum of these two complex numbers is " << real << " + (" << img
             << "i)" << endl;
    }
};
int main()
{
    complex o1, o2;
    o1.getdata();
    o2.getdata();
    complex o3 = o1 + o2;
    o3.display();

    return 0;
}