#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
class RESLT
{
private:
  int rollno,marks[3];
  char name[30];
public:
	void input()
	{
		cout<<"ENTER ROLL NO:";
		cin>>rollno;
		fflush(stdin);
		cout<<"ENTER NAME:";
		fflush(stdin);

        cin>>name;
		for (int i = 1; i<=3; ++i)
		{
			cout<<"ENTER MARKS["<<i<<"]=";
			cin>>marks[i];
		}

	}
	void output()
	{
		cout<<"ROLL NO:"<<rollno<<endl;
		cout<<"NAME:"<<name<<endl;
		for (int i = 1; i<=3; ++i)
		{
			cout<<"MARKS["<<i<<"]="<<marks[i]<<endl;
		}
	}

};
int main()
{
	RESLT obj;
	obj.input();

	obj.output();
	getch();
	return 0;
}
