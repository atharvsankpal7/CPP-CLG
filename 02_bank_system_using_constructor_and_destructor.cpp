#include <iostream>
using namespace std;
class account {
private:
  float bal = 0, intr, amt, rate, dep, month;
  long int acc;
  string name;

public:
  void display() { cout << "The balance in the account is " << bal << endl; }
  void withdraw() {
    int a;
    cout << "Enter the amount of money that you want to withdraw-->\n";
    cin >> a;
    bal -= a;
    display();
  }
  void deposite() {
    int a;
    cout << "Enter the amount that you want to deposite -->" << endl;
    cin >> a;
    bal += a;
    display();
  }
  account() {
    cout << "Enter the account no-->" << endl;
    cin >> acc;
    cout << "Enter the name of account holder-->" << endl;
    cin >> name;
  }
  ~account() { cout << "Thanks for visiting!!!\n"; }
  void menu() {
    int a;
    cout << "\n1.Display Balance \n2.Deposite Money \n3.Withdraw "
            "\n4.Stop"
         << endl;
    cin >> a;
    switch (a) {
    case 1:
      display();
      break;

    case 2:
      deposite();
      break;

    case 3:
      withdraw();
      break;

    default:
      return;
      break;
    }
    menu();
  }
};
int main() {
  account a1;
  a1.menu();
  return 0;
}