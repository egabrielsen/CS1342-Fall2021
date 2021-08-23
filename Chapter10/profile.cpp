#include <iostream>
#include <string>

using namespace std;

/**
 * @brief
 * This is used for representing users in LinkedIn
 */
class Profile {
 public:
  // Constructors
  Profile();  // default constructor
  Profile(int idVal, string newFirstName,
          string newLastName);  // overloaded constructor

  // setters
  void setFirstName(string updatedFirstName);
  void setLastName(string updatedLastName);

  // getters
  string getFirstName() const;
  string getLastName() const;

  // utility
  void display() const;

  // Overloaded Operators
  bool operator==(const Profile& other) const;

 private:
  string firstName;
  string lastName;
  int* id;
};

void Profile::display() const {
  cout << "Id: " << *id << endl;
  cout << "First Name: " << getFirstName() << endl;
  cout << "Last Name: " << getLastName() << endl;
}

string Profile::getFirstName() const { return firstName; }

string Profile::getLastName() const { return lastName; }

void Profile::setFirstName(string firstName) { this->firstName = firstName; }

void Profile::setLastName(string lastName) { this->lastName = lastName; }

Profile::Profile() : firstName("--"), lastName("--"), id(new int(0)) {
  cout << "Default Constructor" << endl;
}

Profile::Profile(int idVal, string newFirstName, string newLastName)
    : id(new int(idVal)), firstName(newFirstName), lastName(newLastName) {
  cout << "Overloaded Constructor" << endl;
}

bool Profile::operator==(const Profile& other) const {
  if (*(this->id) == *(other.id) && this->firstName == other.firstName &&
      this->lastName == other.lastName) {
    return true;
  }
  return false;
}

int main() {
  Profile p1(1, "Erik", "Gabrielsen");
  Profile p2(1, "Erik", "Gabrielsen");

  bool check = p1 == p2;
  string text = check ? "True" : "False";
  cout << text << endl;

  return 0;
}