#include <iostream>
#include <conio.h>
using namespace std;
class Array
{
	int a[5];
	 public:
	 void fill();
	 void display();
	 void max();
	 void min();

};
void Array::fill()
{
	for (int i = 0; i <5; ++i)
	{
		cin>>a[i];
	}
}
void Array::display()
{
	for (int i = 0; i < 5; ++i)
	{
		cout<<a[i]<<" ";
	}
}
void Array::max()
{
	int m=a[0];
	for (int i = 0; i < 5; ++i)
	{
	   if(m<a[i])
	   	m=a[i];
	}
		   cout<<"\nMAXIMUM VALUE IS::"<<m<<endl;
}
void Array::min()
{
	int m=a[0];
	for (int i = 0; i <5; ++i)
	{
	     if(m>a[i])
	     m=a[i];
	}
		 cout<<"MINIMUM VALUE IS::"<<m<<endl;
}
int main()
{
	Array arr;
	cout<<"ENTER FIVE NUMBERS:"<<endl;
	arr.fill();
	cout<<"YOU ENTERED THE FOLLOWING VALUES:"<<endl;
	arr.display();
	arr.max();
	arr.min();
	getch();
	return 0;
}