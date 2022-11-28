#include <iostream>
#include <string.h>
using namespace std;
class Marks
{
protected:
    string Name;
    int sub[5];
    string Grade;

public:
    void GetValue()
    {
        cout << "Enter the name of student: ";
        cin >> Name;
        cout << "Enter the marks of the student: " << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << "Enter the marks of subject number " << i + 1 << ": ";
            cin >> sub[i];
        }
    }
    void DisplayValue()
    {
        int sum = 0;
        for (int i = 0; i < 5; i++)
        {
            sum += sub[i];
        }
        float avg = (sum / 5);

        if (avg > 90)
        {
            Grade = "AA";
        }
        if (avg < 90 && avg >= 80)
        {
            Grade = "AB";
        }
        if (avg < 80 && avg >= 70)
        {
            Grade = "BB";
        }
        if (avg < 70 && avg >= 60)
        {
            Grade = "BC";
        }
        if (avg < 60 && avg >= 50)
        {
            Grade = "CC";
        }
        if (avg < 50 && avg >= 40)
        {
            Grade = "DD";
        }

        if (avg < 40)
        {
            Grade = "FF";
        }
        cout << "The sum of the marks of student is :" << sum << endl;
        cout << "The average of the marks of student is :" << avg << endl;
        cout << "The Grade obtained by the student is :" << Grade << endl;
    }
};
int main()
{
    Marks s1;
    s1.GetValue();
    s1.DisplayValue();
    return 0;
}