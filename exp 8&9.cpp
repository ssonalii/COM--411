#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

class student
{
private:
string std_name,std_add;
int std_id;
public:
void create();
void output();
void update();
void search();
void del();
void display();
};
void student :: create()
{
    ofstream f;
    f.open("abc.dat");
    cout<<"Enter the name of the student : "<<endl;
    cin>>std_name;
    cout<<"Enter the id of the student  : "<<endl;
    cin>>std_id;
    cout<<"Enter the address of the student : "<<endl;
    cin>>std_add;
    f<<std_name<<std_id<<std_add;
      f.close();
}
void student :: output()
{
    ofstream f;
    f.open("abc.dat");
    cout<<" Name of the student : "<<std_name<<endl;
    cout<<"ID of the student : "<<std_id<<endl;
    cout<<" Address of the student : "<<std_add<<endl;
    f<<std_name<<std_id<<std_add;
      f.close();
}
void student :: update()
{
    ofstream f;
    f.open("abc.dat");
    cout<<"---------Update info----------"<<endl;
 cout<<"Enter the name of the student"<<endl;
 cin>>std_name;
 cout<<"Enter the Id of the student"<<endl;
cin>>std_id;
cout<<"Enter the address of the student"<<endl;
cin>>std_add;
f<<std_name<<std_id<<std_add;
      f.close();
}
void student :: search()
{
    ofstream f;
    f.open("abc.dat");
    if (this ->std_id == std_id)
    {
       cout<<"Student Name : "<<std_name<<endl;
       cout<<"Student id :  "<<std_id<<endl;
       cout<<"Student Address : "<<std_add <<endl;
       f<<std_name<<std_id<<std_add;
      f.close();
    }

}
void student :: del()
{
    ofstream f;
    f.open("abc.dat");
    string *p, *r;
    int *q;
    p=&std_name;
    q=&std_id;
    r=&std_add;
    p=new string;
    q=new int;
    r=new string;
    delete p;
    delete q;
    delete r;
    f<<std_name<<std_id<<std_add;
      f.close();
}
void student :: display()
{
    ofstream f;
    f.open("abc.dat");
    cout<<" Name of the student : "<<std_name<<endl;
        cout<<" ID of the student : "<<std_id<<endl;
        cout<<" Address of the student : "<<std_add<<endl;
         f<<std_name<<std_add<<std_add;
      f.close();
}

int main()
{
    int choice,n;
    cout<<"Enter the number of course you want to enter:"<<endl;
cin>>n;
 student s[n];
    while(1)

    {
    cout<<"Enter your choice"<<endl;
    cout<<"1.Input "<<"\t"<<"2.Output"<<"\t"<<"3.Update"<<"\t"<<"4.Search"<<"\t"<<"5.Delete"<<"\t"<<"6.Edit"<<"\t"<<endl;
    cin>>choice;
    {
    switch (choice)
    {
    case 1: for (int i = 0; i < n; i++)
    {
        s[i].create();

    }
    break;
    case 2: for (int i = 0; i < n; i++)
    {
        s[i].output();
    }
    break;
    case 3: for (int i = 0; i < n; i++)
    {
        s[i].update();
    }
    break;
    case 4: for (int i = 0; i < n; i++)
    {
        s[i].search();
    }
    break;
    case 5: for (int  i = 0; i < n; i++)
    {
        s[i].del();
    }
    break;
    case 6: for (int  i = 0; i < n; i++)
    {
        s[i].display();
    }
    break;
    default : cout<<"Wrong choice"<<endl;
     break;
    }
    }
}
return 0;
}
