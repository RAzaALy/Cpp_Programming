#include<iostream>
#include<conio.h>
#include <stdio.h>
using namespace std;
class BOOK
{
	int id;
	float price;
	char title[20];
public:
	void input()
	{
		cout<<"PLEASE ENTER RECORD OF TWO BOOKS:"<<endl;
		cout<<"ENTER BOOK ID:";
		cin>>id;
		fflush(stdin);
		cout<<"ENTER BOOK TITLE:";
		gets(title);
		cout<<"ENTER BOOK PRICE:";
		cin>>price;
	}
	void show()
	{
		cout<<"BOOK ID:"<<id<<endl;
		cout<<"BOOK TITLE:"<<title<<endl;
		cout<<"BOOK PRICE:"<<price<<endl;
	}
	void  check(BOOK x,BOOK y)
	{
		cout<<"THE DETAIL OF MOST COSTLY BOOK::"<<endl;
		if(x.price>y.price)
			x.show();
		else
			y.show();
	}

};
int main()
{
	BOOK b1,b2,obj;
	b1.input();
	b2.input();
   obj.check(b1,b2);
  getch();
  return 0;

}
