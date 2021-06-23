#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
int main()
{
	system("color 0c");
	int i,n;
	cout<<"ENTER TABLE NUMBER:";
	cin>>n;
	cout<<"\n\n\tTABLE"<<endl;
	for (i = 1; i<=10; i++)
	{
		int s; 
		s=n*i;
      cout<<""<<n<<"*"<<""<<i<<"="<<""<<s<<endl;
	}
	getch();
	return 0;
}