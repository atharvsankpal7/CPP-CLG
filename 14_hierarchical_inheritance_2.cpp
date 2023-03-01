#include <iostream>
#include <string>
using namespace std;

class Staff
{
protected:
    int code;
    string name;

public:
    void set_staff(int c, string n)
    {
        code = c;
        name = n;
    }
    void display_staff()
    {
        cout << "Code: " << code << endl;
        cout << "Name: " << name << endl;
    }
};

class Teacher : public Staff
{
protected:
    string subject;
    string publication;

public:
    void set_teacher(string s, string p)
    {
        subject = s;
        publication = p;
    }
    void display_teacher()
    {
        cout << "Subject: " << subject << endl;
        cout << "Publication: " << publication << endl;
    }
};

class Officer : public Staff
{
protected:
    string grade;

public:
    void set_officer(string g)
    {
        grade = g;
    }
    void display_officer()
    {
        cout << "Grade: " << grade << endl;
    }
};

class Typist : public Staff
{
protected:
    int speed;

public:
    void set_typist(int s)
    {
        speed = s;
    }
    void display_typist()
    {
        cout << "Speed: " << speed << endl;
    }
};

class Regular : public Typist
{
public:
    void display_regular()
    {
        cout << "No additional information" << endl;
    }
};

class Casual : public Typist
{
protected:
    int daily_wages;

public:
    void set_casual(int dw)
    {
        daily_wages = dw;
    }
    void display_casual()
    {
        cout << "Daily Wages: " << daily_wages << endl;
    }
};

int main()
{

    Teacher t;
    t.set_staff(100, "John Doe");
    t.set_teacher("Mathematics", "ABC Publication");
    t.display_staff();
    t.display_teacher();
    cout << endl;

    Officer o;
    o.set_staff(200, "Jane Doe");
    o.set_officer("Officer Grade A");
    o.display_staff();
    o.display_officer();
    cout << endl;

    Regular r;
    r.set_staff(300, "Bob Smith");
    r.set_typist(50);
    r.display_staff();
    r.display_typist();
    r.display_regular();
    cout << endl;

    Casual c;
    c.set_staff(400, "Alice Smith");
    c.set_typist(40);
    c.set_casual(200);
    c.display_staff();
    c.display_typist();
    c.display_casual();
    cout << endl;
    return 0;
}
