#include <iostream>
using namespace std;
class student_info {
protected:
  string name;
  int URN;

public:
  void getinfo() {
    cout << "Enter the name of student --> " << endl;
    getline(cin, name);
    cout << "Enter the URN of student --> " << endl;
    cin >> URN;
  }
};
class marks : public student_info {
protected:
  int sub[5];

public:
  void getmarks() {
    cout << "Enter the marks of student --> ";
    for (int i = 0; i < 5; i++) {
      cout << "Enter the marks of subject " << i + 1 << " ";
      cin >> sub[i];
    }
  }
};
class CGPA : public marks {
private:
  float avg = 0;

public:
  void calculateavg() {
    for (int i = 0; i < 5; i++) {
      avg += sub[i];
    }
    avg /= 5.0;
  }
  void DisplayData() {
    cout << "The CGPA of the student named " << name << " with URN " << URN
         << " is " << avg << endl;
  }
};
int main() {
  CGPA s1;
  s1.getinfo();
  s1.getmarks();
  s1.calculateavg();
  s1.DisplayData();
  return 0;
}