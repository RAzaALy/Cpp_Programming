#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int year;
	cout<<"ENTER YEAR:";
	cin>>year;
	if(year%400==0||year%100!=0 && year%4==0)
	cout<<year<<" IS A LEAP YEAR:";
    else
    	cout<<year<<" IS NOT A LEAP YEAR";
    getch();
    return 0;
}