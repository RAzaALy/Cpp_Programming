#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
using namespace std;
class String
{
private:
	char str[30];
public:
	String()
	{
		str[0]='\0';
	}
	void input()
	{
		cout<<"ENTER A STRING:";
		gets(str);
	}
	void show()
	{
		cout<<str<<endl;
	}
	void operator ==(String s)
	{
		if(strlen(s.str)==strlen(str))
		 cout<<"BOTH STRING ARE EQUAL:"<<endl;
		else
			cout<<"BOTH STRING ARE NOT EQUAL:"<<endl;
	}
};
int main()
{
	String s1,s2;
    s1.input();
    s2.input();
    s1.show();
    s2.show();
    s1==s2;//s1.operator==(s2);
   getch();
   return 0;
}















