#include<iostream>
#include<conio.h>
using namespace std;
class person
{
  private:
    int id;
    char name[20];
    char adress[30];
  public:
    person()
    {
       id=0;
       name[0]='\0';
       adress[0]='\0';
    }
    void input()
    {
        cout<<"ENTER YOUR ID:";
        cin>>id;
        cout<<"\nENTER YOUR NAME:";
        cin.ignore();
        cin.getline(name,19);
        cout<<"\nENTER YOUR ADRESS:";
        cin.ignore();
        cin.getline(adress,29);
    }
    void output()
    {
        cout<<"PERSONAL INFORMATION..."<<endl;
        cout<<"ID:"<<id;
        cout<<"\nNAME:"<<name;
        cout<<"\nADRESS:"<<adress<<endl;
    }
};
class student:public person
{
private:
    int rollno,marks;
public:
    student()
    {
        rollno=0;
        marks=0;
    }
    void input()
    {
        person::input();
        cout<<"ENTER YOUR ROLL NO:";
        cin>>rollno;
        cout<<"\nENTER YOUR MARKS IN FSc:";
        cin>>marks;
    }
    void output()
    {
        person::output();
        cout<<"EDUCATION INFORMATION..."<<endl;
        cout<<"ROLL NO:"<<rollno;
        cout<<"\nMARKS:"<<marks<<endl;
    }
};
class scholarship:public student
{
private:
    char sname[30];
    long amount;
public:
    scholarship()
    {
        sname[0]='\0';
        amount=0;
    }
    void input()
    {
        student::input();
        cout<<"ENTER SCHOLARSHIP NAME:";
        cin.ignore();
        cin.getline(sname,29);
        cout<<"ENTER AMOUNT:";
        cin>>amount;
    }
    void output()
    {
        student::output();
        cout<<"SCHOLARSHIP INFORMATION..."<<endl;
        cout<<"SCHOLARSHIP NAME:"<<sname;
        cout<<"\nSCHOLARSHIP AMOUNT:"<<amount<<"RS"<<endl;
    }

};
int main()
{
    scholarship obj;
    obj.input();
    obj.output();
    getch();
    return 0;
}
