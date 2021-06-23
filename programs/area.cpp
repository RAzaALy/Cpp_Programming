#include<iostream>
#include<conio.h>
using namespace std;
class circle
{
	float r;
public:
	inline void input()
	{
	 cout<<"ENTER RADIUS OF CIRCLE:\n";
	 cin>>r;
	}
	inline void AREA()
	{
		cout<<"AREA OF CIRCLE IS="<<3.1416*r*r<<endl;
	}
	inline void CIRCUMFERANCE()
	{
		cout<<"CIRCUMFERANCE OF CIRCLE IS="<<2*3.1416*r;
	}
};
int main()
{
	circle obj;
	obj.input();
	obj.AREA();
	obj.CIRCUMFERANCE();
	getch();
	return 0;
}
