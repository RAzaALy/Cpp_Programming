#include <iostream>
#include <conio.h>
using namespace std;
class Car
{
public:
	void shiftgear()
	{cout<<"shift the gear of car:\n";}
};
class SportsCar:public Car
{
public:
	void shiftgear()//method overriding:
	{cout<<"shift the gear of Sports Car:";}
};
int main()
{
	SportsCar s;
	Car c;
	c.shiftgear();
	s.shiftgear();
	getch();
	return 0;
}