// Deep Copy:
// if an object in a class cotain pointer and points outside memory location 
// then deep copy prefer and also make a copy constructor
#include <iostream>
#include<conio.h>
using namespace std;
class Test
{
private:
	int a,b;
	int *p;
public:
	void setdata(int x,int y,int z)
	{
		a=x;
		b=y;
		*p=z;
	}
	void showdata()
	{
		cout<<"\na="<<a<<"b="<<b<<" p="<<*p<<endl;
	}
	Test() 
	{}
	Test(Test &d)//copy constructor:
	{
		
		a=d.a;
		b=d.b;
		p=new int;
		*p=*(d.p);
	}
	   ~Test()
	{
		delete p;
	}
};
int main()
{
	Test t1;
	t1.setdata(5,9,7);
	t1.showdata();
	Test t2=t1;
	t2.showdata();
	getch();
	return 0;
}