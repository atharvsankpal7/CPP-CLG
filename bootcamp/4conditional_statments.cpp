// Conditional Statements
#include <iostream>
typedef int xD;
using namespace std;
int main()
{
    xD a, age;
    cout << "Enter the age of the candidate --> ";
    cin >> a;
    // if (a < 18)
    // {
    //     cout << "The candidate can't vote" << endl;
    // }
    // else if (a > 17 && a < 51)
    // {
    //     cout << "The age of the candidate is between 18 and 50" << endl;
    // }
    // else
    // {
    //     cout << "The candidate is over 50" << endl;
    // }
    if (a > 50)
    {
        age = 1;
    }
    else if (a > 17 && a < 51)
    {
        age = 2;
    }
    else
    {
        age = 3;
    }
    switch (age)
    {
    case 1:
        cout << "The candidate can't vote";
        break;
    case 2:
        cout << "The age of the candidate is between 18 and 50";
        break;
    case 3:
        cout << "The candidate is over 50";
        break;
    default:
        break;
    }
    return 0;
}