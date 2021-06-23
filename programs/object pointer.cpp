#include <iostream>
#include<conio.h>
using namespace std;
class Box
{
private:
	int l,b,h;
public:
	void input()
	{
		cout<<"ENTER LENGTH & BRIDTH AND HEIGHT:"<<endl;
		cin>>l>>b>>h;
	}
	void output()
	{
		cout<<"\nLENGTH:"<<l<<"\nBRIDTH:"<<b<<"\nHEIGHT:"<<h;
	}
};
int main()
{
	Box *b,box;
	b=&box;
	b->input();
	b->output();
	getch();
	return 0;
}