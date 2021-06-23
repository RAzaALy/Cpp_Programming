#include<iostream>
#include<conio.h>
using namespace std;
class student
{
    private:
    string name;
    int age;
    public:
    void setstudent(string s,int a)
    {
         name=s;
         age=a;
    }
    void showstudent()
    {
        cout<<"\nNAME:"<<name;
        cout<<"\nAge:"<<age;
    }
};
int main()
{
    pair<string,int>p1;
    pair<string,string>p2;
    pair<string,float>p3;
    pair<int,student>p4;
    p1=make_pair("ALI RAZA",5);
    p2=make_pair("Hello world","Pakistan");
    p3=make_pair("Drilling C++",335.4);
    student s1;
    s1.setstudent("ALI RAZA JUTT",18);
    p4=make_pair(235,s1);
    cout<<"\npair 1:";
    cout<<"\n"<<p1.first<<" "<<p1.second;
     cout<<"\npair 2:";
    cout<<"\n"<<p2.first<<" "<<p2.second;
     cout<<"\npair 3:";
    cout<<"\n"<<p3.first<<" "<<p3.second;
     cout<<"\npair 4:";
    cout<<"\nRoll No:"<<p4.first<<" ";
    student s2=p4.second;
    s2.showstudent();
    getch();
    return 0;
}
