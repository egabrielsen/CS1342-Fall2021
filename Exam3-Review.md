# Exam 3

Exam 3 will cover Chapters 11 - 15 of ZyBook

1 Handwritten cheat sheet allowed - front and back. Normal printer paper (8x11)

## Pointers and Dynamic Memory Allocation

- Dealing with Dynamic Objects

```c++
Profile profile;
Profile *dynamicProfile = new Profile;

*(dynamicProfile).display();
dynamicProfile->display();
```

- Rule of Three - whenever we encounter dynamic memory inside an object (new)
  - Destructor
  - Copy Assignment
  - Copy Constructor

```c++
class Example {
  int *ptr;
  double *array;

  Example() {
    ptr = new int;
    array = new double[10];
  }
}
```

- Deep vs Shallow Copy
- Know how to implement all three functions for the Rule of Three

## Linked Lists

- Collection of nodes linked together via pointers

  - Singly Linked Lists

  ```c++
  struct Node {
    Node *next;
    string data;
  }
  ```

  - Double Linked Lists

  ```c++
  struct Node {
    Node *next;
    Node *prev;
    string data;
  }
  ```

- Common Linked List Functions
  - Append / Insert function
  - Removing nodes
  - Traversing (forward / backward)

```c++
void LinkedList::display() {
  Node *curr = this->head;

  while (curr != nullptr) {
    /* perform any tasks */
    cout << curr->data << endl;

    curr = curr->next;
  }
}
```

- Linked Lists vs Arrays / Vectors

  - Accessing Elements
  - Memory usage
  - Interacting with data

- Stacks / Queues
  - Stack - LIFO
  - Queue - FIFO
  - Implement with Array / Vector
  - Implement with Linked Lists

### Inheritance and Polymorphism

- Inheritance - being able to derive methods and data members from existing classes.
  - Base class
  - Derived class

```c++
class Derived: public Base {

};
```

- Data Members and Access Specifiers

  - public
  - private
  - **protected**

- Types of Inheritance

  - public
  - private
  - protected

- Lifecycle of Objects with Inheritance
  - Contructors for Base / Derived
  - Destructors for Base / Derived

### Polymorphism

- "Many types"
- override functions
- **virtual**

```c++
class Base {
  virtual void display();
}

class Derived: public Base {
  void display();
}

Base *ptr = new Derived;
ptr->display(); // This will invoke the Derived implementation of display

vector<Base *> bases;

```

- Runtime polymorphism
  1. Pointers
  2. Inheritance
  3. virtual

## Exceptions

- try, throw, catch

```c++
#include <exception>

try {
  /* perform task */
  throw runtime_error("");
} catch (runtime_error &e) {
  /** handle that error **/
} catch (...) {
  /** handles all exceptions **/
}
```

- Functions with Exceptions

## User Defined Templates

- Function Templates
- Class Templates
- Generic Data Types

```c++
template <typename T, ...>
void func(T data);

func<int>(10);
```

Classess

```c++
template <typename T, ...>
class TemplateClass {
  T data;

  TemplateClass();
}

TemplateClass<T>::TemplateClass() {

}
```

Example template classes:

- STL Arrays and Vectors

```c++
vector<int> integers;
vector<double> integerts;

array<int, 10> arr1;
array<double, 20> arr1;
```
