#include<iostream>
#include<string>
using namespace std;
class course
{
    public:
    string name;
    int duration;
};
class UGcourse : public course
{
    public: 
    string type = "Undergraduate";
};
class PGcourse : public course
{
    public:
    string type = "Post Graduate";
};
class Diplomacourse : public course
{
    public:
    string type = "Diploma";
};
int main()
{
    UGcourse ug;
    ug.name = "B.E";
    ug.duration = 12;

    PGcourse pg;
    pg.name = "M.Tech";
    pg.duration = 46;

    Diplomacourse dc;
    dc.name = "Diploma in Web Development";
    dc.duration = 23;
    cout<<"Details of Undergraduate course:"<<endl;
    cout<<"Course name:"<<ug.name<<endl;
    cout<<"Duration:"<<ug.duration<<endl;
    cout<<"Course type:"<<ug.type<<endl;
    cout<<endl;
    cout<<"Details of Post graduate course:"<<endl;
    cout<<"Course name:"<<pg.name<<endl;
    cout<<"Duratiion:"<<pg.duration<<endl;
    cout<<"Course type:"<<pg.type<<endl;
    cout<<endl;
    cout<<"Details of Diploma course class:"<<endl;
    cout<<"Course name:"<<dc.name<<endl;
    cout<<"Duration:"<<dc.duration<<endl;
    cout<<"Course type:"<<dc.type<<endl;
    cout<<endl;
    return 0;
}
