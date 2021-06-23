#include<iostream>
#include <conio.h>
int mul(int,int);
int main()
{
	int a,b;
	std::cout<<"ENTER TWO NUMBERS"<<std::endl;
	std::cin>>a>>b;
	int m=mul(a,b);
	std::cout<<"MULTICPLICATION IS "<<m;
	getch();
	return 0;
}
int mul(int x,int y)
{
	return(x*y);
}