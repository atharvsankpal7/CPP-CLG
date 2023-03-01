#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    char a[] = {'r', 'u', 't', 'u', 'j', 'a', '\0'};
    cout << a << endl;
    string a2 = {"rutika"};
    cout << a2 << endl;
    string a3;
    cout << "Enter the string ";
    getline(cin, a3);
    cout << "The string is " << a3 << endl;
    cout << "The length of the string is " << a3.length() << endl;
    string a4;
    a4 = a3;
    cout << "The a4 string is : " << a4 << endl;
    string a5 = " shewale";
    a2.append(a5);
    cout << "The string after appending is " << a2 << endl;
    string a7 = a2.substr(0, 3);
    cout << "The substring is " << a7 << endl;
    sort(a2.begin(), a2.end());
    cout << "The string after sorting is " << a2 << endl;
    
    return 0;
}