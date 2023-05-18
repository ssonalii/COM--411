#include<iostream>
using namespace std;
class Student
{
    private:
    char name[20];
    int dob;
    int rollno;
    char branch[20];
    float marks;

    public:
        void setData()
        {
            cout<<"Enter the name of student: ";
            cin>>name;
            cout<<"Enter the dob of student : ";
            cin>>dob;
            cout<<"enter the rollno of student:";
            cin>>rollno;
            cout<<"Enter the branch of student:";
            cin>>branch;
            cout<<"Enter the marks of student:";
            cin>>marks;
            cout<<endl;
        }
        void displayData()
        {
            cout<<"Name: "<<name<<endl;
            cout<<"dob:"<<dob<<endl;
            cout<<"rollno:"<<rollno<<endl;
            cout<<"branch:"<<branch<<endl;
            cout<<"marks:"<<marks<<endl;

        }
        void updateData()
        {
            cout<<"-----UPDATED INFORMATION-------";
            cout<<"Enter the new name of student:"<<endl;
            cin>>name;
            cout<<"Enter the update Dob of student:"<<endl;
            cin>>dob;
            cout<<"Enter the new roll no of student:"<<endl;
            cin>>rollno;
            cout<<"Enter the new branch of student:" <<endl;
            cin>>branch;
            cout<<"Enter the updated marks of student:"<<endl;
            cin>>marks;
         }
};
int main()
{
    Student s;
    while(1)
    {
        cout<<"Choose operation you want to perfrom:\n";
        cout<<"Press 1 to insert the data of student\n";
        cout<<"Press 2 to update the data of student\n";
        cout<<"Press 3 to display the data of student\n";
        cout<<"Press 4 to exit\n";
        cout<<"Enter your choice:";
        int ch;
        cin>>ch;
        switch(ch)
        {
        case 1:
        s.setData();
        break;
        case 2:
        s.updateData();
        break;
        case 3:
        s.displayData();
        break;
        case 4:
        exit(1);
        break;
        default:
        cout<<"------INVALID CHOICE------";
        break;
        }
    }
    return 0;
}
