#include <iostream>
#include <string>

using namespace std;

class Person {
 public:
  Person() {}

  Person(int age, string name, string phoneNumber) {
    // cout << "(Person) - Overloaded Constructor" << endl;
    this->age = age;
    this->name = name;
    this->phoneNumber = phoneNumber;
  }

  ~Person() {}

  virtual void display() {
    cout << "-- Base Class Display --" << endl;
    cout << "Name: " << this->name << endl;
    cout << "Age: " << this->age << endl;
    cout << "Phone Number: " << this->phoneNumber << endl;
  }

 private:
  string name;
  string phoneNumber;
  int age;
};

class Student : public Person {
 public:
  Student() {}

  Student(int studentId, int age, string name, string phoneNumber)
      : Person(age, name, phoneNumber), studentId{studentId} {
    // cout << "(Student) - Overloaded Constructor" << endl;
    // this->studentId = studentId;
  }

  ~Student() {}

  void display() {
    cout << "-- Derived Class Display --" << endl;
    cout << "Student Id: " << this->studentId << endl;
    Person::display();
  }

 private:
  int studentId;
};

// class Professor : public Person {
//  public:
//   int facultyId;
// };

int main() {
  Student student(1, 20, "John Smith", "123456789");
  Person* studentPtr = &student;

  studentPtr->display();

  return 0;
}