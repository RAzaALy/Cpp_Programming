//type conversion from permitive type to class type:
#include <iostream>
#include <conio.h>
using namespace std;
class Complex
{
private:
    int a,b;
public:
	void setdata(int x,int y)
	{
		a=x;
		b=y;
	}
	void showdata()
	{
		cout<<"\na="<<a<<" b="<<b;
	}
	Complex()//default constructor:
	{}
	Complex(int k)
	{
		a=k;
		b=0;
	}
};
int  main()
{
	Complex c1;
	int x=45,y=4;
	float z;
	z=y;//automatic type conversion
	cout<<"z="<<z;
	c1=x;//imagine->c1.Complex(x);
	c1.showdata();
	getch();
	return 0;
}
