#include <iostream>
#include <conio.h>
using namespace std;
class A
{
private:
	int a, b;
	int *p;

public:
	A()
	{
		a = b = 0;
		// p=new int;
	}
	A(int x, int y, int z) //dynamically constructor:makes memory location for object:
	{
		a = x;
		b = y;
		p = new int;
		*p = z;
	} 
	void showdata()
	{
		cout << "x=" << a << "  y=" << b << "  z=" << *p;
	}
};
int main()
{
	A a1, a2(5, 6, 7);
	a2.showdata();
	getch();
	return 0;
}