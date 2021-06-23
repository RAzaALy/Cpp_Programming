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
		cout<<"ENTER STRING:";
		gets(str);
	}
	void show()
	{
		cout<<str;
	}
	String operator+(String s)
	{
		String temp;
		strcpy(temp.str,str);//copy s1 string to temp.str//temp.str concatinate(attach) to s.str->s1+s2:
		strcat(temp.str,s.str);
		return(temp);
	}
};
int main()
{
	String s1,s2,s3;
	s1.input();
	s2.input();
	s3=s1+s2;//s1.operator+(s2);
	s3.show();
	getch();
	return 0;
}
