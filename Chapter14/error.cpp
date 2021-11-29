#include <iostream>
#include <stdexcept>
#include <vector>

using namespace std;

int main() {
  vector<int> numbers;
  numbers.push_back(1);

  try {
    // numbers.at(1);  // throw
    throw out_of_range("Index is out of bounds");
  } catch (out_of_range &e) {
    cout << e.what() << endl;
  }

  return 0;
}