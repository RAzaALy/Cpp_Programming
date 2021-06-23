#include <iostream>
#include <conio.h>
#include<stdio.h>
using namespace std;
class parent
{
  private:
  	int id;
  	char name[30],address[30];
  public:
  	parent()
  	{
  		id=0;
  		name[0]='\0';
  		address[0]='\0';
  	}
  	void getinfo()
  	{
  		cout<<"ENTER YOUR ID:";
  		cin>>id;
  		cout<<"ENTER YOUR NAME:";
  		fflush(stdin);
  		gets(name);
  		cout<<"ENTER YOUR ADRESS:";
  		fflush(stdin);
  		gets(address);
  	}
  	void showinfo()
  	{
  		cout<<"\n\n\nYOUR PERSONAL INFORMATION IS AS FOLLOWS:"<<endl;
  		cout<<"ID:"<<id<<endl;
  		cout<<"NAME:"<<name<<endl;
  		cout<<"ADRESS:"<<address<<endl;
  	}
};
class child:public parent
{
private:
	int marks,rolno;
public:
	child()
	{
		rolno=marks=0;
	}
	void input()
	{
		cout<<"ENTER YOUR ROLL NO:";
		cin>>rolno;
		cout<<"ENTER YOUR MARKS:";
		cin>>marks;
	}
	void output()
	{
		cout<<"\n\n\nYOUR EDUCATIONAL INFORMATION IS AS FOLLOWS:"<<endl;
		cout<<"ROLL NO:"<<rolno<<endl;
		cout<<"MARKS:"<<marks<<endl;
	}
};
int main()
{
	child obj1;
	obj1.getinfo();
	obj1.input();
	obj1.showinfo();
	obj1.output();
	getch();
	return 0;
}
