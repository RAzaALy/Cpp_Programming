#include <iostream>
#include <conio.h>
using namespace std;
class TRAVEL
{
private:
	int km,hr;
public:
	TRAVEL()
	{
		km=hr=0;
	}
	void input()
	{
		cout<<"ENTER KILOMETERS TRAVLED:";
		cin>>km;
		cout<<"ENTER HOURS TRAVLED:";
		cin>>hr;
	}
	void output()
	{
		cout<<"YOU HAVE TRAVLED "<<km<<" KILOMETERS IN "<<hr<<" HOURS."<<endl;
	}
	TRAVEL operator+(TRAVEL p)
	{
		TRAVEL temp;
        temp.km=km+p.km;
        temp.hr=hr+p.hr;
        return(temp);
	}
};
int main()
{
	TRAVEL t1,t2,t3;
	t1.input();
	t1.output();
	t2.input();
	t2.output();
	t3=t1+t2;
	cout<<"TOTAL TRAVELLING IS AS FOLLOWS:\n\n\n"<<endl;
	t3.output();
	getch();
	return 0;
}