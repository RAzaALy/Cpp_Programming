#include<iostream>
#include <conio.h>
using namespace std;
void fun()
{
	throw 43;
}
int main()
{
	int i=3;
	cout<<"WELCOME\n";
	try{
		if (i==3)
		fun();
		//or throw 43;
		cout<<"IN TRY!";
	}
	catch(int)
	{
		cout<<"Exception case:";
	}
	cout<<"\nLAST LINE...";
	getch();
	return 0;
}
