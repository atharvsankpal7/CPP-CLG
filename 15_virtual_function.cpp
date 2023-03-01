#include <iostream>
using namespace std;

class Shape {
protected:
    double x, y;
public:
    void get_data() {
        cout << "Enter two dimensions: ";
        cin >> x >> y;
    }
    virtual void display_area() {}
};

class Triangle : public Shape {
public:
    void display_area() {
        cout << "Area of Triangle: " << 0.5 * x * y << endl;
    }
};

class Rectangle : public Shape {
public:
    void display_area() {
        cout << "Area of Rectangle: " << x * y << endl;
    }
};

class Circle : public Shape {
public:
    void get_data() {
        cout << "Enter radius: ";
        cin >> x;
        y = 0; // Set the default value for y to be 0
    }
    void display_area() {
        cout << "Area of Circle: " << 3.14 * x * x << endl;
    }
};

int main() {
    int choice;
    Shape *s;
    while (1) {
        cout << "Enter choice (1 for Triangle, 2 for Rectangle, 3 for Circle, 4 to exit): ";
        cin >> choice;
        switch(choice) {
            case 1:
                s = new Triangle;
                break;
            case 2:
                s = new Rectangle;
                break;
            case 3:
                s = new Circle;
                break;
            case 4:
                exit(0);
            default:
                cout << "Invalid choice" << endl;
                continue;
        }
        s->get_data();
        s->display_area();
        delete s;
    }
    return 0;
}

