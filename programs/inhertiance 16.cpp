#include<iostream>
#include<conio.h>
using namespace std;
class result
{
private:
    int marks[3];
public:
    void input()
    {
        for(int i=0;i<3;i++){
           cout<<"ENTER MARKS:";
           cin>>marks[i];
        }

    }
    void output()
    {
        int t=0;
        cout<<"\nRESULT CARD:\n";
     for(int i=0;i<3;i++){
        cout<<"MARKS="<<marks[i]<<endl;
        t=t+marks[i];
     }
     cout<<"TOTAL MARKS:"<<t<<endl;
     cout<<"AVERAGE MARKS:"<<float(t)/3.0;
    }
};
class student
{
private:
    int rollno;
    char name[30];
    result res;
public:
    void in()
    {
        cout<<"ENTER YOUR ROLL NO:";
        cin>>rollno;
        cout<<"ENTER YOUR NAME:";
        fflush(stdin);
        gets(name);
        res.input();
    }
    void show()
    {
        cout<<"\nPERSONAL INFORMATION:\n";
        cout<<"ROLL NO:"<<rollno<<endl;
        cout<<"NAME :"<<name<<endl;
        res.output();
    }
};
int main()
{
    student s1;
    s1.in();
    s1.show();
    getch();
    return 0;
}








