#include <iostream>

using namespace std;

// Base class
class Course {
public:
  virtual void display() {
    cout << "Course Details:\n";
  }
};

// Derived class 1
class UGCourse : public Course {
public:
  void display() override {
    cout << "UG Course Details:\n";
    cout << "Course Name: Bachelor of Engineering\n";
    cout << "Duration: 4 years\n";
  }
};

// Derived class 2
class PGCourse : public Course {
public:
  void display() override {
    cout << "PG Course Details:\n";
    cout << "Course Name: Master of Science\n";
    cout << "Duration: 2 years\n";
  }
};

// Derived class 3
class DiplomaCourse : public Course {
public:
  void display() override {
    cout << "Diploma Course Details:\n";
    cout << "Course Name: Diploma in Computer Applications\n";
    cout << "Duration: 1 year\n";
  }
};

// Main function
int main() {
  Course* course;

  // Creating objects of each derived class and storing their addresses in base class pointer
  course = new UGCourse();
  course->display();

  course = new PGCourse();
  course->display();

  course = new DiplomaCourse();
  course->display();

  return 0;
}