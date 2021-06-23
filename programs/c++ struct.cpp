#include<iostream>
#include<conio.h>
#include <stdio.h>
using namespace std;
struct  student
{
private:
	int rollno;
	char name[20];
	char father[20];
public:
    inline void input()
{
	cout<<"ENTER YOUR ROLL NO: ";
	cin>>rollno;
	if(rollno<0)
	rollno=-rollno;
	cout<<"ENTER YOUR NAME: ";
	cin>>name;
	cout<<"ENTER FATHER NAME: ";
	fflush(stdin);
	cin>>father;
}
    inline void output()
{
	cout<<" STUDENT RECORD\n";
	cout<<"ROLL NO:"<<rollno<<endl<<"STUDENT NAME:"<<name<<endl<<"FATHER NAME:"<<father<<endl;
}
};
int main()
{
    student S;
    S.input();
    S.output();
	getch();
	return 0;
}
