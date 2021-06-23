#include <iostream>
#include <conio.h>
using namespace std;
class base
{
private:
	int c;
public:
	int a;
protected:
	int b;
};
//public and protected members of base class are protected of derived class:
class derived:protected base
{
public:
	void input()
	{
		cout<<"ENTER VALUE OF A:";
		cin>>a;
		cout<<"ENTER VALUE OF B:";
		cin>>b;
	}
	void output()
	{
		cout<<"a="<<a<<"  b="<<b;
	}
};
int  main()
{
	derived obj;
	obj.input();
	obj.output();
	getch();
	return 0;

}
