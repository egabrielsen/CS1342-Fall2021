#include <iostream>
#include <sstream>
#include <string>

using namespace std;

// Base class
class Employee {
 public:
    string getName();
  void setName(string);

 private:
  int id;
  string name;
};

int main() { return 0; }