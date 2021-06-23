#include <conio.h>
#include <iostream>
using namespace std;
class Read
{
private:
	int days,pages;
public:
	Read()//constructor
	{
		days=pages=0;
	}
	void input()
	{
		cout<<"HOW MANY DAYS HAVE YOU READ?\n";
		cin>>days;
		cout<<"HOW MANY PAGES HAVE YOU READ?\n";
		cin>>pages;
	}
	void show()
	{
		cout<<"YOU HAVE READ "<<pages<<" PAGES IN "<<days<<" DAYS:";
	}
	void operator+=(Read r)
	{
       days=days+r.days;
       pages=pages+r.pages;
	}
};
int main()
{
	Read r1,r2;
	r1.input();
	r2.input();
	cout<<"\nREADING NUMBER 1..."<<endl;
	r1.show();
	cout<<"\nREADING NUMBER 2..."<<endl;
	r2.show();
	cout<<"\nADDING r1 to r2 using += operator..."<<endl;
	r2+=r1;
	cout<<"\nTOTAL READING IS AS FOLLOWS:"<<endl;
	r2.show();
	getch();
	return 0;
}
