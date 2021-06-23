#include<iostream>
#include <conio.h>
#include<windows.h>
using namespace std;
inline int add(int ,int,int=0,int=0);
int main()
{
	system("color 0c");
	cout<<"ENTER TWO NUMBERS "<<endl;
	int a,b,c,d;
	cin>>a>>b;
	cout<<"SUM ="<<add(a,b)<<endl;
	cout<<"ENTER FOUR NUMBERS "<<endl;
	cin>>a>>b>>c>>d;
	cout<<"SUM ="<<add(a,b,c,d)<<endl;
	getch();
	return 0;
}
int add(int x,int y,int z,int n)
{
	return(x+y+z+n);
}