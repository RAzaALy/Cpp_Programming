//conversion of class type to permitive type:
#include <iostream>
#include <conio.h>
using namespace std;
class Complex
{
	int a,b;
public:
	void setdata(int x,int y)
	{
		a=x;
		b=y;
	}
	void showdata()
	{
		cout<<"a="<<a<<"  b="<<b<<endl;
	}
	operator int()//casting operator for conversion class type to premitive type:
	{
		return(a*b);//or return(a); or return(b) as you wish:
	}
};
int main()
{
	Complex c1;
	c1.setdata(5,9);
	c1.showdata();
	int x;
	x=c1;//conversion from class type to permitive type:
	cout<<"x="<<x;
	getch();
	return 0;
}
