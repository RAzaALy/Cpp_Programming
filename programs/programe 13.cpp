#include<iostream>
#include<conio.h>
using namespace std;
class marks
{
	int n,a,b;
	float f;
public:
	inline void input()
	{
	 cout<<"ENTER THREE MARKS:\n";
	 cin>>n>>a>>b;
	}
	inline void SUM()
	{
		cout<<"SUM IS="<<n+a+b<<endl;
	}
	inline void avg()
	{
		f=(n+a+b)/3.0;
		cout<<"AVERAGE="<<f;
	}
};
int main()
{
	marks obj;
	obj.input();
	obj.SUM();
	obj.avg();
	getch();
	return 0;
}