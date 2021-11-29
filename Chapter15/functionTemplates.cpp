#include <iostream>

using namespace std;

// -- Make a templated function for findMax
template <typename T>
T findMax(T val1, T val2) {
  if (val1 > val2) {
    return val1;
  } else {
    return val2;
  }
}

class MyClass {
  int data;
};

int main() {
  MyClass one, two;
  findMax<MyClass>(one, two);
  // find max int
  int x = 100;
  int y = 200;
  cout << findMax(x, y) << endl;

  // find max char
  cout << findMax('a', 'z') << endl;

  // find max double
  cout << findMax(200.00, 200.01) << endl;
  return 0;
}