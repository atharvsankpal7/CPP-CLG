#include <iostream>
using namespace std;
class complex
{
public:
    int real;
    int img;

    complex(int a = 0, int b = 0)
    {
        real = a;
        img = b;
    }
    complex operator+(const complex &obj)
    {
        complex result;
        result.real = real + obj.real;
        result.img = img + obj.img;
        return result;
    }
    complex operator-(const complex &obj)
    {
        complex result;
        if (real >= obj.real)
        {
            result.real = real - obj.real;
            result.img = img - obj.img;
        }
        else
        {
            result.real = -real + obj.real;
            result.img = -img + obj.img;
        }
        return result;
    }

    complex operator*(const complex &obj)
    {
        complex result;
        result.real = (real * obj.real) - (img * obj.img);
        result.img = (real * obj.img) + (img * obj.real);
        return result;
    }
    void display_add()
    {
        cout << "The sum of these two complex numbers is " << real << " + (" << img
             << "i)" << endl;
    }
    void display_diff()
    {
        cout << "The substraction of these two complex numbers is " << real
             << " + (" << img << "i)" << endl;
    }
    void display_prod()
    {
        cout << "The product of these two complex numbers is " << real << " +( "
             << img << "i)" << endl;
    }
    void getdata()
    {
        cout << "Enter the real part of number -->" << endl;
        cin >> real;
        cout << "Enter the imaginary part of number -->" << endl;
        cin >> img;
    }
};
int main()
{
    complex o1, o2, o3;
    int a;
    do
    {
        cout << "Enter the operation that you want to "
                "perform\n1.Addition\n2.Substraction\n3.Multiplication\n4.Exit"
             << endl;
        cin >> a;
        switch (a)
        {
        case 1:
            cout << "Enter the data of first complex number" << endl;
            o1.getdata();
            cout << "Enter the data of first complex number" << endl;
            o2.getdata();
            o3 = o1 + o2;
            o3.display_add();
            break;
        case 2:
            cout << "Enter the data of first complex number" << endl;
            o1.getdata();
            cout << "Enter the data of first complex number" << endl;
            o2.getdata();
            o3 = o1 - o2;
            o3.display_diff();
            break;
        case 3:
            cout << "Enter the data of first complex number" << endl;
            o1.getdata();
            cout << "Enter the data of first complex number" << endl;
            o2.getdata();
            o3 = o1 * o2;
            o3.display_prod();
            break;
        default:
            a = 4;
        }
    } while (a != 4);
}