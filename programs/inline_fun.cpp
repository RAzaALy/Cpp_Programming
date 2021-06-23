#include<iostream>
#include <conio.h>
using namespace std;
inline void fun();
int main()
{
	cout<<"YOU ARE IN MAIN FUNCTION"<<endl;
	fun();
	getch();
	return 0;
}
void fun()
{
	cout<<"YOU ARE IN FUN FUNCTION"<<endl;
}
