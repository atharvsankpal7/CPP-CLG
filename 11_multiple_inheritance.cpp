#include <iostream>
using namespace std;
class A {
  int id;
  char gender;
  string name;

public:
  void setdata(int id, char gender, string name) {
    this->id = id;
    this->gender = gender;
    this->name = name;
  }
  void getdata() {
    cout << "id: " << id << " gender: " << gender << " name: " << name << endl;
  }
};
class B {
  string Dept_name;
  string work;
  float time;

public:
  void setdata(string Dept_name, string work, float time) {
    this->Dept_name = Dept_name;
    this->work = work;
    this->time = time;
  }
  void getdata() {
    cout << "Dept_name: " << Dept_name << " work: " << work << " time: " << time
         << endl;
  }
};
class C : public A, public B {
public:
  void SetData() {
    A::setdata(1, 'M', "John");
    B::setdata("Engineering", "Software", 1.2);
  }
  void DISPLAY() {
    A::getdata();
    B::getdata();
  }
};
int main() {
  C obj;
  obj.SetData();
  obj.DISPLAY();
  return 0;
}