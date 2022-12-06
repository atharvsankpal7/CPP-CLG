#include <iostream>
using namespace std;
class Unary {
  int a;
  int inch, feet;

public:
  Unary(int x) { a = x; }
  Unary(int x, int y) { inch = x, feet = y; }
  Unary() {}
  Unary operator-() {
    a = -a;
    inch = -inch;
    feet = -feet;
    // return 0;
  }
  void display() {
    cout << "The value of data after using '-' operator is -->\t" << a << endl;
  }
  void display_feet_inch() {
    cout << "The value of the inch and feet after the conversion is " << inch
         << " " << feet << endl;
  }
};
class complex {
  int real;
  int img;

public:
  complex(int a = 0, int b = 0) {
    real = a;
    img = b;
  }
  complex operator+(const complex &obj) {
    complex result;
    result.real = real + obj.real;
    result.img = img + obj.img;
    return result;
  }
  void display() {
    cout << "The sum of these two complex numbers is " << real << " + " << img
         << "i" << endl;
  }
};
class Increament {
  int a;

public:
  Increament() {}
  Increament(int x) { a = x; }
  Increament operator++() {
    a += 1;
    return a;
  }
  void display() {
    cout << "The value of the data after increament is " << a << endl;
  }
};
class Decreament {
  int a;

public:
  Decreament() {}
  Decreament(int x) { a = x; }
  Decreament operator--() {
    a -= 1;
    // return a;
  }
  void display() {
    cout << "The value of the data after decreament is " << a << endl;
  }
};
class addition {
  int a;

public:
  addition() {}
  addition(int x) { a = x; }
  addition operator+(const addition &object) {
    addition result;
    result.a = a + object.a;
    // return result;
  }
  void display() {
    cout << "The addition of these two numbers is " << a << endl;
  }
};
int main() {
  Unary obj1(10), obj2(-20), obj3(10, 30);
  -obj1;
  -obj2;
  obj1.display();
  obj2.display();
  complex o1(15, -6), o2(3, 9);
  complex o3 = o1 + o2;
  o3.display();
  Increament o4(10);
  ++o4;
  o4.display();
  Decreament o5(20);
  --o5;
  o5.display();
  addition obj_1(5), obj_2(6);
  addition obj_3 = obj_1 + obj_2;
  obj_3.display();
  -obj3;
  obj3.display_feet_inch();
}