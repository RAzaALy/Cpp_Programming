#include <iostream>
#include<conio.h>
#include <stdio.h>
using namespace std;
class Student
{
private:
	static int r;
	int rollno,marks;
	char name[30];
public:
	Student()
	{
		r++;
		rollno=r;
	}
     void input()
     {
     	cout<<"ENTER NAME:";
     	fflush(stdin);
     	gets(name);
     	cout<<"ENTER MARKS:";
     	cin>>marks;
     }
     void output()
     {
     	cout<<"\n\nDETAIL OF Student:\n\n\n";
     	cout<<"ROLL NO:"<<rollno<<endl;
     	cout<<"NAME:"<<name<<endl;
     	cout<<"MARKS:"<<marks<<endl;
     }
};
int Student::r=0;
int main()
{
	Student s1,s2,s3;
	s1.input();
    s2.input();
    s3.input();
	s1.output();
	s2.output();
	s3.output();
	getch();
	return 0;
}