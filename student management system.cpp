#include <iostream>
#include <string>
using namespace std;

class Student {
    private:
        int rollNo;
        string name;
        string subject1;
        string subject2;
        string subject3;
        float maxMarks;
        float minMarks;
        float obtainMarks1;
        float obtainMarks2;
        float obtainMarks3;

    public:
        void setData() {
            cout<<"Enter the roll no.: ";
            cin>>rollNo;
            cout<<"Enter the name: ";
            cin>>name;
            cout<<"Enter the subject1 name: ";
            cin>>subject1;
            cout<<"Enter the subject2 name: ";
            cin>>subject2;
            cout<<"Enter the subject3 name: ";
            cin>>subject3;
            cout<<"Enter the maximum marks: ";
            cin>>maxMarks;
            cout<<"Enter the minimum marks: ";
            cin>>minMarks;
            cout<<"Enter the obtained marks for subject1: ";
            cin>>obtainMarks1;
            cout<<"Enter the obtained marks for subject2: ";
            cin>>obtainMarks2;
            cout<<"Enter the obtained marks for subject3: ";
            cin>>obtainMarks3;
        }

        void displayData() {
            float totalMarks = obtainMarks1 + obtainMarks2 + obtainMarks3;
            float percentage = (totalMarks / (maxMarks * 3)) * 100;
            cout<<"Roll no.: "<<rollNo<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Subject1: "<<subject1<<", Obtained marks: "<<obtainMarks1<<", Maximum marks: "<<maxMarks<<endl;
            cout<<"Subject2: "<<subject2<<", Obtained marks: "<<obtainMarks2<<", Maximum marks: "<<maxMarks<<endl;
            cout<<"Subject3: "<<subject3<<", Obtained marks: "<<obtainMarks3<<", Maximum marks: "<<maxMarks<<endl;
            cout<<"Total marks: "<<totalMarks<<endl;
            cout<<"Percentage: "<<percentage<<"%"<<endl;
        }
};

int main() {
    const int numStudents = 3;
    Student students[numStudents];

    for (int i = 0; i < numStudents; i++) {
        cout<<"Enter the details for student "<<i+1<<":"<<endl;
        students[i].setData();
    }

    for (int i = 0; i < numStudents; i++) {
        cout<<"Details for student "<<i+1<<":"<<endl;
        students[i].displayData();
    }

    return 0;
}
