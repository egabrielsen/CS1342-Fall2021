#include <iostream>
#include <stdexcept>  // For std::out_of_range
#include <vector>
using namespace std;

int main() {
  vector<string> names = {"Ryley", "Edan", "Reagan", "Henry",  "Caius",
                          "Jane",  "Guto", "Sonya",  "Tyrese", "Johnny"};
  int index;

  cin >> index;

  try {
    // if (index < 0 || index > 9) {
    //   throw out_of_range("Index must be between 0 - 9");
    // }

    cout << "Found name: " << names.at(index) << endl;
  } catch (...) {
    cout << "Default Catch all" << endl;
  }

  return 0;
}
