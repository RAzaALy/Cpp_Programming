#include <iostream>
#include <conio.h>
using namespace std;
namespace MYspace
{
	int a;
	void fun();
	class A
	{
	public:
		void funn();
	};
}
//when we define a funciton of myspace then scope resolution is write:
void MYspace::fun()
{
	cout<<"HELLO NAMESPACE FUNCTION."<<endl;
}
void MYspace::A::funn()
{
	cout<<"HELLO CLASS FUNCTION."<<endl;
}
using namespace MYspace; 
int main()
{
	a=5; 
	cout<<"a="<<a<<endl;
	fun();
	A obj;
	obj.funn();
	getch();
	return 0;
}