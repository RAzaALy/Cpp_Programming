#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
class HELLO
{
public:
	HELLO()
	{
	 cout<<"OBJECT IS CREATED..."<<endl;
	}
	~HELLO()
	{
		cout<<"OBJECT IS GOING TO DESTROY..."<<endl;
	}
};
int main()
{
	HELLO a,s,d,f;
	getch();
	return 0;
	system("pause");
}