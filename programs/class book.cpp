#include <iostream>
#include <conio.h>
#include<stdio.h>
using namespace std;
class BOOK
{
private:
	int pge,price;
	char title[30];
public:
	void input()
	{
		cout<<"ENTER TITLE:";
		gets(title);
		cout<<"ENTER PAGES:";
		cin>>pge;
		cout<<"ENTER PRICE:";
		cin>>price;
	}
	void output()
	{
		cout<<"TITLE:"<<title<<endl;
		cout<<"PAGES:"<<pge<<endl;
		cout<<"PRICE:"<<price<<endl;
	}
};
int main()
{
	BOOK b1;
	b1.input();
	BOOK b2(b1);
	BOOK b3=b1;
	cout<<"THE DETAIL OF BOOK1:\n"<<endl;
    b1.output();
    cout<<"THE DETAIL OF BOOK2:\n"<<endl;
    b2.output();
    cout<<"THE DETAIL OF BOOK3:\n"<<endl;
    b3.output();
    getch();
    return 0;
}