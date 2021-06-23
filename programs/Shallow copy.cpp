#include <iostream>
#include<conio.h>
using namespace std;
class Test
{
private:
	int a,b;
public:
	void setdata(int x,int y)
	{
		a=x;
		b=y;
	}
	void showdata()
	{
		cout<<"\na="<<a<<"  b="<<b<<endl;
	}

};
int main()
{
	Test t1;
	t1.setdata(5,9);
	// t1.showdata();
	Test t2=t1;//shallow copy or write as t2=t1 and run copy constructor:
	t2.showdata();
	getch();
	return 0;
}