#include <iostream>
using namespace std;
int add(int a, int b)
{
    return a + b;
}
void swap2(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a, b;
    cout << "Enter the number one and two ";
    cin >> a >> b;
    int result = add(a, b);
    cout << result << endl;
    swap2(&a, &b);
    cout << "The numbers after swapping are " << a << " " << b << endl;
    return 0;
}