#include <iostream>
#include <conio.h>
using namespace std;
class base
{
protected:
	int a,b;
public:
	base()
	{
		a=b=0;
	}
	void input()
	{
		cout<<"ENTER VALUE OF A:";
		cin>>a;
		cout<<"ENTER VALUE OF B";
		cin>>b;
	}
	void add()
	{
		cout<<"A+B="<<a+b<<endl;
	}
	void sub()
	{
		cout<<"A-B="<<a-b<<endl;
	}
	void mul()
	{
		cout<<"A*B="<<a*b<<endl;
	}
	void div()
	{
		cout<<"A/B="<<a/b<<endl;
	}

};
class derived:public base
{
public:
	void add()
	{
		if(a<=0||b<=0)
			cout<<"INVALID CHOICE:";
		else
	base::add();
	}
	
	void sub()
	{
		if(a<=0||b<=0)
			cout<<"INVALID CHOICE:";
		else
	base::sub();
	}
   void mul()
	{
		if(a<=0||b<=0)
			cout<<"INVALID CHOICE:";
		else
	base::mul();
	}
	
	void div()
	{
		if(a<=0||b<=0)
			cout<<"INVALID CHOICE:";
		else
	base::div();
	}
	

};
int main()
{
	derived d1;
	d1.input();
	d1.add();
	d1.sub();
	d1.mul();
	d1.div();
	getch();
	return 0;
}