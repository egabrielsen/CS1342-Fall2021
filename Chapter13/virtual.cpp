#include <iostream>
#include <string>

using namespace std;

class Base {
 public:
  virtual void foo() { cout << "Base foo()" << endl; }
};

class Derived : public Base {
 public:
  void foo() { cout << "Derived foo()" << endl; }
};

int main() {
  Base b;
  Derived d;

  Base *bPtr = &b;
  bPtr->foo();

  bPtr = &d;
  bPtr->foo();

  return 0;
}