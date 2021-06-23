#include <iostream>
#include<conio.h>
using namespace std;
class Box
{
private:
	int l,b,h;
public:
	void input(int l,int b,int h)
	{
//this is a keyword and  points instance member:
		this->l=l;
		this->b=b;
		this->h=h;
	}
	void output()
	{
		cout<<"\nLENGTH:"<<l<<"\nBRIDTH:"<<b<<"\nHEIGHT:"<<h;
	}
};
int main()
{
	Box box;
	box.input(45,23,89);
	box.output();
	getch();
	return 0;
}
