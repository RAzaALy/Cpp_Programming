#include<iostream>
#include <conio.h>
using namespace std;
class A
{
public:
	void fun(){
		cout<<"PARENT CLASS fun:";}
};
class B:public A
{
public:
	void fun1(){cout<<"\nCHILD CLASS fun1:";}
};
int main()
{
  B obj;
  obj.fun();
  obj.fun1();
  getch();
  return 0;
}