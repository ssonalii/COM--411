#include <iostream>
#include <string>
using namespace std;
class Student {
    int roll_no, semester, total_marks;
    string name, branch;
public:
    void get_data();
    void display();
    int search(int);
};
void Student::get_data() {
    cout << "Enter Roll No: ";
    cin >> roll_no;
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Semester: ";
    cin >> semester;
    cout << "Enter Branch: ";
    cin >> branch;
    cout << "Enter Total Marks: ";
    cin >> total_marks;
}
void Student::display() {
    cout << "Roll No: " << roll_no << endl;
    cout << "Name: " << name << endl;
    cout << "Semester: " << semester << endl;
    cout << "Branch: " << branch << endl;
    cout << "Total Marks: " << total_marks << endl;
}

int Student::search(int roll) {
    if (roll == roll_no) {
        display();
        return 1;
    }
    return 0;
}
int main() {
    int n, roll;
    cout << "Enter number of students: ";
    cin >> n;
    Student *s = new Student[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter details for student " << i+1 << endl;
        s[i].get_data();
    }
    cout << "Enter Roll No to search: ";
    cin >> roll;
    int found = 0;
    for (int i = 0; i < n; i++) {
        found = s[i].search(roll);
        if (found) {
            break;
        }
    }
    if (!found) {
        cout << "No student found with Roll No " << roll << endl;

    }

    return 0;

}

