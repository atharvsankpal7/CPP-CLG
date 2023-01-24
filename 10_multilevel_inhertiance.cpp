#include <iostream>
using namespace std;
class A {
  int ISBN;
  string title;
  string author;

public:
  A() {}
  void setinfo_A(int ISBN, string title, string author) {
    this->ISBN = ISBN;
    this->title = title;
    this->author = author;
  }
  void getdata_A() {
    cout << "ISBN: " << ISBN << endl;
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
  }
};
class B : public A {
  string publisher;
  int year;
  float price;

public:
  B() {}
  B(string publisher, int year, float price) {
    this->publisher = publisher;
    this->year = year;
    this->price = price;
  }
  void getdata_B() {
    getdata_A();
    cout << "The publisher is: " << publisher << endl;
    cout << "The year is: " << year << endl;
    cout << "The price is: " << price << endl;
  }
};

using namespace std;
int main() {
  class B b("SAMS", 2006, 540);
  b.setinfo_A(20135, "Object oriented programming in C++", "Robert Lafore");
  b.getdata_B();
}