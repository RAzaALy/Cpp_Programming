#include<iostream>
#include<conio.h>
using namespace std;
class B;
class A
{
private:
	int a;
public:
	void setdata(int x){
		a=x;
	}
	friend void sum (A,B);
};
class B
{
	private:
	int b;
public:
	void setdata(int y){
		b=y;
	}
	friend void sum (A,B);
};
void sum(A o1,B o2)
{
	cout<<"SUM="<<o1.a+o2.b; 
//we can access private variables of two or more classes by friend function:
}
int main()
{
    A obj1;
    B obj2;
    obj1.setdata(45);
    obj2.setdata(55);
	sum(obj1,obj2);
	getch();
	return 0;
}