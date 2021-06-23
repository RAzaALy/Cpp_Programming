#include<iostream>
#include<conio.h>
#include <stdio.h>
using namespace std;
struct  book
{
   private:
    int bookid;
	char title[30];
	float price;
public:
    inline void input()
{
	cout<<"ENTER BOOK ID: ";
	cin>>bookid;
	if(bookid<0)
		bookid=-bookid;
	cout<<"ENTER BOOI TITLE: ";
	cin>>title;
	cout<<"ENTER BOOK PRICE: ";
	fflush(stdin);
	cin>>price;
}
 inline void output()
{
	cout<<"  BOOK RECORD\n";
	cout<<"ID="<<bookid<<endl<<"TITLE="<<title<<endl<<"PRICE="<<price<<endl;
}
}B;
int main()
{
	B.input();
	B.output();
	getch();
	return 0;
}