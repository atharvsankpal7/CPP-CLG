#include <iostream>
using namespace std;
void greet(string s = "chom", int marks = 100)
{
    cout << "Hello " << s << " good morning you scored " << marks << endl;
}
// void greet()
// {
//     cout << "Chom" << endl;
// }
int main()
{
    // the sequence of the arguments should be the same as declared in the defination
    greet("xyz", 122);
    greet();
    greet("rutuja");
    return 0;
}