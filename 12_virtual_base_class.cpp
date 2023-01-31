#include <iostream>
using namespace std;
class student
{
protected:
    int roll_no;
    string name;
    int sum;

public:
    void display()
    {
        cout << "The sum of the all of acadamic achievements of the student is " << sum << endl;
        cout << "The average of the student is " << float(sum / 5);
    }
};

class study : virtual public student
{
protected:
    int physics;
    int chemistry;
    int maths;

public:
    void get_study_data()
    {
        cout << "Enter the marks of physics -->";
        cin >> physics;
        cout << "Enter the marks of chemistry -->";
        cin >> chemistry;
        cout << "Enter the marks of maths -->";
        cin >> maths;
    }
};
class sports : virtual public student
{
protected:
    int indoor;
    int outdoor;

public:
    void get_sports_data()
    {
        cout << "Enter the marks of indoor sports --> ";
        cin >> indoor;
        cout << "Enter the marks of outdoor sports --> ";
        cin >> outdoor;
    }
};
class calc_sum : public study, public sports
{
public:
    void calc()
    {
        sum = physics + chemistry + maths + indoor + outdoor;
    }
};
int main()
{
    calc_sum s1;
    s1.get_study_data();
    s1.get_sports_data();
    s1.calc();
    s1.display();
    return 0;
}