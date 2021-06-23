#include <iostream>
#include <conio.h>
using namespace std;
class TEST
{
public:
	TEST()
	{
		cout<<"OBJECT CREATED..."<<endl;
	}
	~TEST()
	{
		cout<<"OBJECT DESTROYED..."<<endl;
		getch();
	}
};
int main()
{
	TEST t1,t2;
	getch();
	return 0;
	}