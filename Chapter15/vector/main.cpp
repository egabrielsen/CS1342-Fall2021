#include <iostream>

#include "vector.h"

int main() {
  Vector<int> vector(5);

  for (int i = 0; i < vector.getLength(); i++) {
    std::cout << vector.at(i) << std::endl;
  }

  return 0;
}