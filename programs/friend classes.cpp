#include <iostream>
#include <conio.h>
using namespace std;
class A
{
	int a,b;
public:
	A()
	{
		a=10;
		b=20;
	}
	friend class B;
};
class B
{
public:
	void showA(A obj,A obj2)
	{
		cout<<"THE VALUE OF A:"<<obj.a<<endl;

		cout<<"THE VALUE OF B:"<<obj2.b<<endl;

	}
};
int main()
{
	A x,z;
	B y;
	y.showA(x,z);
	getch();
	return 0;
}
