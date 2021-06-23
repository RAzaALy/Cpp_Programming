#include <iostream>
#include <conio.h>
using namespace std;
class A
{
public:
	virtual void fun()
	//virtual fun is used for late binding or run time binding through compiler:
	{cout<<"PARENT FUNCTION:";}
};
class B:public A
{
public:
	void fun()//FUNCTION OVERRIDING:
	{cout<<"CHILD FUNCTION:";}
};
int main()
{
	A o1,*p;
	B o2;
    p=&o2;
	p->fun();
	getch();
	return 0;
}
