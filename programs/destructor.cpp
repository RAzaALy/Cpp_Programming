#include <iostream>
#include <conio.h>
using namespace std;
class Complex
{
   public:
	~Complex()
	{cout<<"RUN DESTRUCTOR"<<endl;}
	
};
void fun()
{
	cout<<"RUN FUN FUNCTION"<<endl;
	Complex obj;
}
int main()
{ 
	fun();
	getch();
	return 0;
}