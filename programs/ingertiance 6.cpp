#include <iostream>
#include <conio.h>
using namespace std;
class parent
{
private:
	int c;
public:
	int a;
protected:
	int b;
};
class child:public parent
{
public:
	void input()
	{
		cout<<"ENTER VALUE OF A:";
		cin>>a;
		cout<<"\nENTER VALUE OF B:";
		cin>>b;
	}
	void output()
	{
		cout<<"a="<<a<<"  b="<<b;
	}

};
int main()
{
	child obj;
	obj.input();
	obj.output();
	getch();
	return 0;
}





